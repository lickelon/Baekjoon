#include <stdio.h>

int board[15][15];
bool isRowFilled[15] = { 0, };
int count = 0;
bool possibility(int x, int y, int N) // x = row, y = column
{
	for (int i = 0; i < N; i++)
	{
		if (board[i][y]) return 0;
	}
	for (int i = 0; i < N; i++)
	{
		if (board[x][i]) return 0;
	}
	for (int i = x > y ? -y : -x; x + i < N && y + i < N; i++)
	{
		if (board[x + i][y + i]) return 0;
	}
	if (x + y <= N)
		for (int i = -y; y + i >= 0 && x - i >= 0; i++)
		{
			if (board[x - i][y + i]) return 0;
		}
	else
		for (int i = N - x - 1; x + i < N && y - i < N; i--)
		{
			if (board[x + i][y - i]) return 0;
		}
	return 1;
}

int solve(int line, int N)
{
	if (line == N) return count++;
	for (int i = 0; i < N; i++)
	{
		if (!isRowFilled[i] && possibility(i, line, N))
		{
			board[i][line] = 1;
			isRowFilled[i] = 1;
			solve(line + 1, N);
			board[i][line] = 0;
			isRowFilled[i] = 0;
		}
	}
	return 0;
}
int main()
{
	int N;
	scanf("%d", &N);
	solve(0, N);
	printf("%d", count);
}