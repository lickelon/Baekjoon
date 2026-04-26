#include <cstdio>

int main()
{
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("* ");
			if((N % 2 == 1 && j + 1
				== (N / 2) + 1) || (N % 2 == 0 && j + 1 == N / 2)) printf("\n ");
		}
		printf("\n");
	}
	
}