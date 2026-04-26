#include <stdio.h>

int main()
{
	bool isprime[1000001] = { 0, };
	int N, M;
	int count = 0;
	int min = 0;
	scanf("%d %d", &N, &M);

	isprime[0] = 1;
	isprime[1] = 1;
	for (int i = 2; i <= 1000; i++)
	{
		int j = i * 2;
		while (j <= 1000000)
		{
			if(!isprime[j]) isprime[j] = 1;
			j += i;
		}
	}

	for (int i = N; i <= M; i++)
	{
		if (isprime[i] == 0)
		{
			printf("%d\n", i);
		}
	}
}