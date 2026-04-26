#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <functional>
#include <climits>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <cstring>
#include <cassert>
using ll = long long;
using namespace std;
ll inf = 1000000007;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//cout<<fixed; cout.precision(15);
	ll n;
	cin >> n;
	vector<ll>t(n);

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		ll h = (s[0] - '0') * 10 + s[1] - '0';
		ll m = (s[3] - '0') * 10 + s[4] - '0';
		ll time = (h-1) * 60 + m;
		t[i] = time;
	}
	int ans = inf;
	for (ll i = 0; i < 720; i++) {
		set<int> _s;
		for (ll j = 0; j < n; j++) {
			int temp = t[j] - j * i;
			while (temp < 0) temp += 720;
			_s.insert(temp % 720);
		}
		ans = min(ans, (int)_s.size());
	}

	cout << ans;

	return 0;
}