#include <stdio.h>

int main()
{
	bool isprime[10001] = { 0, };
	int N, M;
	int count = 0;
	int min = 0;
	scanf("%d %d", &N, &M);

	isprime[0] = 1;
	isprime[1] = 1;
	for (int i = 2; i <= 100; i++)
	{
		int j = i * 2;
		while (j <= 10000)
		{
			isprime[j] = 1;
			j += i;
		}
	}

	for (int i = N; i <= M; i++)
	{
		if (isprime[i] == 0)
		{
			count += i;
			if (min == 0) min = i;
		}

	}
	if (count == 0) printf("-1");
	else printf("%d\n%d", count, min);
	
}