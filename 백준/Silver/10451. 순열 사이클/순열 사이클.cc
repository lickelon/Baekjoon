#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve()
{
	int N;
	cin >> N;
	vector<int> _v(N+1);
	int ans = 0;
	for (int i = 1; i < N + 1; i++) {
		cin >> _v[i];
	}
	for (int i = 1; i < N + 1; i++) {
		if (_v[i] != 0) {
			ans++;
			int j = _v[i];
			_v[i] = 0;
			while (j != i) {
				int temp = j;
				j = _v[j];
				_v[temp] = 0;
			}
		}
	}
	cout << ans << "\n";
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