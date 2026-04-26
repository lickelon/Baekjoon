#include <iostream>
#include <vector>
#include <algorithm>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m;

	cin >> n >> m;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < m; i++) {
		int input;
		cin >> input;
		int ans = lower_bound(v.begin(), v.end(), input) - v.begin();
		if (ans < n && v[ans] == input) cout << ans << "\n";
		else cout << "-1\n";
	}
}