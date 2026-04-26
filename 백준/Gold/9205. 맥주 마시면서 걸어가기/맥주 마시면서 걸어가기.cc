#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

using pii = pair<int, int>;

void solve()
{
	int N;
	cin >> N;
	vector<pii> _v(N + 2);
	vector<int> visit(N + 2, 0);
	for (int i = 0; i < N + 2; i++) {
		cin >> _v[i].first >> _v[i].second;
	}

	queue<int> _q;
	_q.push(0);
	visit[0] = 1;

	while (!_q.empty()) {
		pii _p = _v[_q.front()];
		_q.pop();
		for (int i = 0; i < N + 2; i++) {
			if (!visit[i]) {
				int dist = abs(_p.first - _v[i].first) + abs(_p.second - _v[i].second);
				if (dist <= 1000) {
					_q.push(i);
					visit[i] = 1;
				}
			}
		}
	}
	if (visit[N + 1]) cout << "happy\n";
	else cout << "sad\n";
}

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		solve();
	}
	return 0;
}