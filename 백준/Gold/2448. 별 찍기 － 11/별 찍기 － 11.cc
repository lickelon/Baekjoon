#include <cstdio>

bool board[3072][6145] = { 0, };

void solve(int x, int y, int size) //x to down, y to right
{

	if (size == 1)
	{
		board[x][y] = 1;
		board[x+1][y-1] = 1;
		board[x+1][y+1] = 1;
		board[x+2][y-2] = 1;
		board[x+2][y-1] = 1;
		board[x+2][y] = 1;
		board[x+2][y+1] = 1;
		board[x+2][y+2] = 1;
	}
	else
	{
		solve(x, y, size / 2);
		solve(x + size, y - size, size / 2);
		solve(x + size, y + size, size / 2);
	}
}

int main()
{
	int N;
	scanf("%d", &N);

	solve(0, N - 1, N / 2);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N * 2; j++)
		{
			if (board[i][j]) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}