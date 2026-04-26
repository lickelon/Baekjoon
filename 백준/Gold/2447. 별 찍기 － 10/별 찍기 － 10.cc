#include <cstdio>

bool board[2187][2187] = { 0, };

void solve(int x, int y, int size)
{

	if (size == 0) board[x][y] = 1;
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i != 1 || j != 1)
				{
					solve(x + i * size, y + j * size, size / 3);
				}
			}
		}
	}
}

int main()
{
	int N;
	scanf("%d", &N);

	solve(0, 0, N / 3);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (board[i][j]) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}