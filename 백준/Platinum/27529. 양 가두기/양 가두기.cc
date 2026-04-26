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

using namespace std;

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

ll inf = 1000000007;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//cout<<fixed; cout.precision(15);
	
	int n;
	cin >> n;
	ll xmin = inf, xmax = -inf, ymin = inf, ymax = -inf;
	vector<pll> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
		xmin = min(xmin, arr[i].first);
		xmax = max(xmax, arr[i].first);
		ymin = min(ymin, arr[i].second);
		ymax = max(ymax, arr[i].second);
	}
	ll fence = 2 * (xmax - xmin + 1) + 2 * (ymax - ymin + 1);
	ll ans = (xmax - xmin + 1) * (ymax - ymin + 1);
	sort(arr.begin(), arr.end());
	ll u, d, ul, dl;
	u = d = arr[0].second;
	ul = dl = arr[0].first;
	vector<pll> adder;
	for (int i = 1; i < n; i++) {
		if (d <= arr[i].second && arr[i].second <= u)
			continue;
		if (d > arr[i].second) {
			ans -= (arr[i].first - dl) * (d - arr[i].second);
			adder.push_back({ arr[i].first, d });
			d = arr[i].second;
			//dl = arr[i].first;
		}
		else if (u < arr[i].second) {
			ans -= (arr[i].first - ul) * (arr[i].second - u);
			adder.push_back({ arr[i].first, u });
			u = arr[i].second;
			//ul = arr[i].first;
		}
	}
	for (auto u : adder) {
		arr.emplace_back(u);
	}
	sort(arr.rbegin(), arr.rend());
	u = d = arr[0].second;
	ll ur, dr;
	ur = dr = arr[0].first;
	for (int i = 1; i < arr.size(); i++) {
		if (d <= arr[i].second && arr[i].second <= u)
			continue;
		if (d > arr[i].second) {
			ans -= (dr - arr[i].first) * (d - arr[i].second);
			d = arr[i].second;
			//dr = arr[i].first;
		}
		else if (u < arr[i].second) {
			ans -= (ur - arr[i].first) * (arr[i].second - u);
			u = arr[i].second;
			//ur = arr[i].first;
		}
	}

	cout << fence << " " << ans;

	return 0;
}