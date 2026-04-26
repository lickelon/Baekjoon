#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

#define NMAX 1002

ll SCarr[NMAX][NMAX];
ll MEMarr[NMAX][NMAX];
ll MEMarrF[NMAX][NMAX][2];

int N, M;

bool validCoord(int x, int y)
{
	return x >= 0 && x < N + 1 && y >= 0 && y <= M + 1;
}
ll go(int x, int y)
{
	if (!validCoord(x,y)) return 0;
	if (MEMarr[x][y] != -1) return MEMarr[x][y];
	return MEMarr[x][y] = SCarr[x][y] + max(SCarr[x][y - 1] + go(x, y - 2), max(go(x - 1, y - 1), go(x + 1, y - 1)));
}

ll goDown(int x, int y);

ll goUp(int x, int y)
{
	if (!validCoord(x, y)) return 0;
	if (MEMarrF[x][y][0] != -1) return MEMarrF[x][y][0];
	return MEMarrF[x][y][0] = max(goUp(x - 1, y - 1), goDown(x, y - 1)) + SCarr[x][y];
}

ll goDown(int x, int y)
{
	if (!validCoord(x, y)) return 0;
	if (MEMarrF[x][y][1] != -1) return MEMarrF[x][y][1];
	return MEMarrF[x][y][1] = max(goUp(x, y - 1), goDown(x + 1, y - 1)) + SCarr[x][y];
}

int main()
{
	ll ans = 0;
	fill(&MEMarr[0][0], &MEMarr[NMAX - 1][NMAX - 1], -1);

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			scanf("%d", &SCarr[i][j]);
	}
	// 정수 좌표 시작
	for (int i = 0; i < N; i++)
	{
		ans = max(ans, go(i, M + 1));
	}

	//0.5좌표 시작
	fill(&MEMarrF[0][0][0], &MEMarrF[NMAX - 1][NMAX - 1][1], -1);

	for (int i = 0; i < N; i++)
	{
		ans = max(ans, max(goUp(i, M + 1), goDown(i, M + 1)));
	}

	cout << ans << endl;
}