#include <iostream>
#include <string>
#include <algorithm>

#define INF 0x7FFFFFFF
#define PI 3.141592653589793

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

inline int solve2(string s)
{
	int s0, s1, e0, e1;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		if (s[i] == '0') {
			s0 = i;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			s1 = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '0') {
			e0 = i;
			break;
		}
	}
	for (int i = n - 1; i >= 0; i--) {
		if (s[i] == '1') {
			e1 = i;
			break;
		}
	}
	int g0 = e0 - s0;
	int g1 = e1 - s1;
	if (abs(g0 - g1) == 1 && (g0 + g1 == n-2)) {
		return 2;
	}
	else if (g0 == g1) {
		return 0;
	}
	return 1;
}

inline void solve()
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (n == 1 || n == 3) {
		cout << "-1\n";
		return;
	}
	int ans = 0;
	if (s[0] == s[n - 1]) {
		int sub = 3;
		string temp = s;
		temp[0] = temp[0] - '0' ? '0' : '1';
		sub = min(sub, solve2(temp));
		temp = s;
		temp[n-1] = temp[n-1] - '0' ? '0' : '1';
		sub = min(sub, solve2(temp));
		ans = 1 + sub;
	}
	else {
		ans = solve2(s);
	}
	cout << ans << "\n";
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//cout<<fixed; cout.precision(15);

	int T;
	cin >> T;

	while (T--)
	{
		solve();
	}

	return 0;
}