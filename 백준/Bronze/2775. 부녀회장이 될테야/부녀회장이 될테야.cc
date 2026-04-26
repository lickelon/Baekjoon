#include <cstdio>

int main()
{
	int apartment[15][14] = { 0 }; //층, 호

	int T;
	int k, n;
	for (int i = 0; i < 14; i++) apartment[0][i] = i + 1;

	for (int i = 1; i < 15; i++)
	{
		for (int j = 0; j < 14; j++)
		{
			for (int l = 0; l <= j; l++)
			{
				apartment[i][j] += apartment[i - 1][l];
			}
		}
	}
	scanf("%d", &T);
	while (T--)
	{

		scanf("%d %d", &k, &n);
		printf("%d\n", apartment[k][n-1]);
	}
}