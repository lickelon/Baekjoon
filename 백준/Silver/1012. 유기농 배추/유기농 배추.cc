#include <cstdio>
#include <stack>

using namespace std;

int main()
{
	int T;

	scanf("%d", &T);

	while (T--)
	{
		bool insect[50][50] = {};
		int m, n, k, result = 0;
		scanf("%d %d %d", &m, &n, &k);

		while (k--)
		{
			int x, y;
			scanf("%d %d", &x, &y);
			insect[x][y] = 1;
		}
		stack<pair<int, int>> _s;

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (insect[i][j])
				{
					_s.push({ i,j });
					while (!_s.empty())
					{
						pair<int, int> coord = _s.top(); _s.pop(); 
						if (insect[coord.first][coord.second] == 0) continue;
						insect[coord.first][coord.second] = 0;
						if (coord.first > 0 && insect[coord.first - 1][coord.second]) _s.push({ coord.first - 1, coord.second });
						if (coord.second > 0 && insect[coord.first][coord.second - 1]) _s.push({ coord.first, coord.second - 1 });
						if (coord.first < m - 1 && insect[coord.first + 1][coord.second]) _s.push({ coord.first + 1, coord.second });
						if (coord.second < n - 1 && insect[coord.first][coord.second + 1]) _s.push({ coord.first, coord.second + 1 });
					}
					result++;
				}
			}
		}

		printf("%d\n", result);
	}
}