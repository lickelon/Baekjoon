#include <cstdio>
#include <algorithm>

const int N_MAX = 131072;

long long tree[N_MAX * 2] = { 0, };
int Node;
void add(int k, long long x)
{
	k += Node;
	tree[k] += x;
	for (k /= 2; k >= 1; k /= 2)
	{
		tree[k] = tree[2 * k] + tree[2 * k + 1];
	}
}

long long sum(int a, int b)
{
	a += Node; b += Node;
	long long s = 0;
	while (a <= b)
	{
		if (a & 1) s += tree[a++];
		if (~b & 1) s += tree[b--];
		a /= 2; b /= 2;
	}
	return s;
}

int main()
{
	int N, Q, input;
	scanf("%d %d", &N, &Q);

	for (Node = 1; Node < N; Node *= 2);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &input);
		add(i, input);
	}

	for (int i = 0; i < Q; i++)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		if (a > b)
		{
			int t = b;
			b = a;
			a = t;
		}
		printf("%lld\n", sum(a-1, b-1));
		
		scanf("%d %d", &a, &b);
		long long diff = (long long)b - tree[a + Node - 1];
		add(a - 1, diff);
	}
}