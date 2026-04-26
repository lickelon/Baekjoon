#include <cstdio>
#include <algorithm>
#define ll long long
const int N_MAX = 100000;

int tree[N_MAX * 4]; // max, min

int Node;

void update(int k, int x)
{

	k += Node;
	tree[k] = x;
	for (k /= 2; k >= 1; k /= 2)
	{
		tree[k] = std::min(tree[2 * k], tree[2 * k + 1]);
	}
}

void result(int a, int b)
{
	a += Node; b += Node;
	int m = 1000000000;
	while (a <= b)
	{
		if (a & 1) m = std::min(m, tree[a++]);
		if (~b & 1) m = std::min(m, tree[b--]);
		a /= 2; b /= 2;
	}
	printf("%d\n", m);
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

	for (int i = 0; i < K; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		result(a - 1, b - 1);
	}
}