#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <map>
#include <set>
#include <string>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

ll gcd(ll a, ll b)
{
	if (!b) return a;
	return gcd(b, a % b);
}

vector<int> e[1001];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M, X, Y;

	cin >> N >> M >> X >> Y;

	for (int i = 0; i < M; i++)
	{
		int a, b;

		cin >> a >> b;
		e[a].push_back(b);
		e[b].push_back(a);
	}

	queue<int> _q;
	_q.push(X);

	for (int i = 0; i < Y; i++)
	{
		int arr[1001] = {};
		while (!_q.empty())
		{
			for (auto u : e[_q.front()])
			{
				arr[u] = 1;
			}
			_q.pop();
		}
		for (int j = 1; j < 1001; j++)
		{
			if (arr[j] == 1)
			{
				_q.push(j);
			}
		}
	}
	if (_q.size() == 0)
	{
		cout << "-1";
	}
	while (!_q.empty())
	{
		int ans = _q.front(); _q.pop();
		cout << ans << " ";
	}

	return 0;
}