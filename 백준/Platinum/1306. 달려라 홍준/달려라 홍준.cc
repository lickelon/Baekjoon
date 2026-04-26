#include <cstdio>
#include <algorithm>
#define ll long long
const int N_MAX = 1000000;

int tree[N_MAX * 4]; // max, min

int Node;

void update(int k, int x)
{

	k += Node;
	tree[k] = x;
	for (k /= 2; k >= 1; k /= 2)
	{
		tree[k] = std::max(tree[2 * k], tree[2 * k + 1]);
	}
}

int result(int a, int b)
{
	a += Node; b += Node;
	int M = 0;
	while (a <= b)
	{
		if (a & 1) M = std::max(M, tree[a++]);
		if (~b & 1) M = std::max(M, tree[b--]);
		a /= 2; b /= 2;
	}
	return M;
}

int main()
{
	int N, K;
	int input;
	scanf("%d %d", &N, &K);

	for (Node = 1; Node < N; Node *= 2);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &input);
		update(i, input);
	}

	for (int i = 0; i <= N - 2 * K + 1; i++)
	{
		printf("%d ", result(i, i + 2 * K - 2));
	}
}