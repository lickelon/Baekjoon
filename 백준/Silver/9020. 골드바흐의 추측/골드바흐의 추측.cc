#include <stdio.h>

int main()
{
	bool isprime[10001] = { 0, };
	int N;
	scanf("%d", &N);
	isprime[0] = 1;
	isprime[1] = 1;
	for (int i = 2; i <= 100; i++)
	{
		int j = i * 2;
		while (j <= 10000)
		{
			if (!isprime[j]) isprime[j] = 1;
			j += i;
		}
	}

	for (int i = 0; i < N; i++)
	{
		int input;
		scanf("%d", &input);
		for (int j = input / 2; j > 0; j--)
		{
			if (isprime[j] == 0 && isprime[input - j] == 0)
			{
				printf("%d %d\n",j, input - j);
				break;
			}
		}
	}
}