#include <stdio.h>

int main()
{
	bool isprime[1001] = { 0, };
	int N, input;
	int count = 0;

	scanf("%d", &N);

	isprime[0] = 1;
	isprime[1] = 1;
	for (int i = 2; i < 50; i++)
	{
		int j = i * 2;
		while (j <= 1000)
		{
			isprime[j] = 1;
			j += i;
		}
	}

	for(int i = 0; i < N; i++)
	{
		scanf("%d", &input);
		if (!isprime[input]) count++;
	}
	printf("%d", count);
}