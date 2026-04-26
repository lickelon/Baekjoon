#include <cstdio>

int N, S, arr[20], bitset = 0, count = 0;

void solve(int start, int sum)
{
	if (sum == S && bitset != 0) count++;
	for (int i = start; i < N; i++)
	{
		if (bitset & (1 << i)) continue;
		{
			bitset ^= 1 << i;
			solve(i + 1, sum + arr[i]);
			bitset ^= 1 << i;
		}
	}
}
int main()
{
	scanf("%d %d", &N, &S);
	for (int i = 0; i < N; i++) scanf("%d", &arr[i]);
	solve(0, 0);
	printf("%d", count);
}