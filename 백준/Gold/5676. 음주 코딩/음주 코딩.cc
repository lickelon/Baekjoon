#include <cstdio>
#include <algorithm>
#define ll long long
const int N_MAX = 100000;

int tree[N_MAX * 4];
int Node;
void solve(int k, int x)
{

	k += Node;
	tree[k] = x;
	for (k /= 2; k >= 1; k /= 2)
	{
		tree[k] = tree[2 * k] * tree[2 * k + 1];
	}
}

int sum(int a, int b)
{
	a += Node; b += Node;
	int s = 1;
	while (a <= b)
	{
		if (a & 1) s *= tree[a++];
		if (~b & 1) s *= tree[b--];
		a /= 2; b /= 2;
	}
	return s;
}

int modify(int value)
{
	if (value > 0) return 1;
	else if (value < 0) return -1;
	else return 0;
}
int main()
{
	int N, K;
	int input;
	while (~scanf("%d %d", &N, &K))
	{
		for (Node = 1; Node < N; Node *= 2);

		std::fill(tree, tree + 400000, 1);

		for (int i = 0; i < N; i++)
		{
			scanf("%d", &input);
			solve(i, modify(input));
		}

		for (int i = 0; i < K; i++)
		{
			int a, b;
			char type;
			scanf("\n%c", &type);
			scanf("%d %d", &a, &b);
			if (type == 'P')
			{
				int result = sum(a - 1, b - 1);
				if (result > 0) printf("+");
				else if (result < 0) printf("-");
				else printf("0");
			}
			else
			{
				b = modify(b);
				solve(a - 1, b);
			}
		}
		printf("\n");
	}
}