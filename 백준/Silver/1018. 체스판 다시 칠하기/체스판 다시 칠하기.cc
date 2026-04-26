#include <cstdio>
#include <algorithm>

using namespace std;

bool board[50][50];

int find(int x, int y)
{
	int count = 0;
	for (int i = 0; i < 64; i++)
	{

		if (board[x + i / 8][y + i % 8] == ((i % 2 == 0) ^ (i / 8 % 2 == 0))) count++;
	}

	return count > 32 ? 64 - count : count;
}

int main()
{
	int m, n, result = 64;
	scanf("%d %d\n", &m, &n);
	char input;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%c", &input);
			if (input == 'B') board[i][j] = 0;
			else if (input == 'W') board[i][j] = 1;
		}
		scanf("%c", &input);
	}

	for (int i = 0; i <= m - 8; i++)
	{
		for (int j = 0; j <= n - 8; j++)
		{
			result = min(find(i, j), result);
		}
	}
	printf("%d", result);
}