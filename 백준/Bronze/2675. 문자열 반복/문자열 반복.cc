#include <cstdio>

int main()
{
	int T, N;
	char c[21];
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &N);
		scanf("%s", c);
		for (int j = 0; c[j] != 0; j++)
			for (int k = 0; k < N; k++)
				printf("%c", c[j]);
		printf("\n");
	}
}