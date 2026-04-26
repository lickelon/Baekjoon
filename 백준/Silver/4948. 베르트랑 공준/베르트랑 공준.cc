#include <stdio.h>

int main()
{
	bool isprime[246913] = { 0, };
	int N;
	int count;
	while (1)
	{
		count = 0;
		scanf("%d", &N);
		if (N == 0) break;
		isprime[0] = 1;
		isprime[1] = 1;
		for (int i = 2; i <= 500; i++)
		{
			int j = i * 2;
			while (j <= 246912)
			{
				if (!isprime[j]) isprime[j] = 1;
				j += i;
			}
		}
		for (int i = N+1; i <= 2 * N; i++)
		{
			if (isprime[i] == 0)
			{
				count++;
			}
		}
		printf("%d\n", count);
	}
}