#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);

	int T;
	cin >> T;
	while (T--)
	{
		int n, m;
		cin >> n >> m;
		vector<pll> score(n + 1, { 0,0 });

		for (int i = 0; i < m; i++)
		{
			int a, b, p, q;
			cin >> a >> b >> p >> q;
			score[a].first += p;
			score[a].second += q;
			score[b].first += q;
			score[b].second += p;
		}

		int _m = 0x7FFFFFFF, _M = 0;
		for (int i = 1; i <= n; i++)
		{
			int fn;
			if (score[i].first == 0 && score[i].second == 0)
			{
				fn = 0;
			}
			else
			{
				ll e1 = (score[i].first * score[i].first * 1000LL);
				ld e2 = (score[i].first * score[i].first + score[i].second * score[i].second);
				ld exp = e1 / e2;
				fn = exp;
			}
			_m = min(_m, fn);
			_M = max(_M, fn);
		}

		cout << _M << "\n" << _m << "\n";
	}

	return 0;
}