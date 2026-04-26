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

ll inf = 1000000007;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	//cout<<fixed; cout.precision(15);
	
	int n;
	cin >> n;
	vector<pii> arr(n+1);
	vector<int> visit(n+1);

	for (int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		arr[a] = { b, c };
	}

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		int curr = i;
		if (visit[curr]) continue;
		visit[curr] = 1;
		vector<int> cost;
		cost.emplace_back(arr[curr].second);
		while (!visit[arr[curr].first]) {
			curr = arr[curr].first;
			visit[curr] = 1;
			cost.emplace_back(arr[curr].second);
		}
		int sub = inf;
		vector<pii> dp(cost.size());
		dp[0].first = inf;
		dp[0].second = cost[0];
		for (int j = 1; j < cost.size(); j++) {
			dp[j].first = dp[j-1].second;
			dp[j].second = min(dp[j - 1].first + cost[j], dp[j - 1].second + cost[j]);
		}
		sub = min(sub, dp[cost.size() - 1].first);
		sub = min(sub, dp[cost.size() - 1].second);
		dp[0].first = 0;
		dp[0].second = inf;
		for (int j = 1; j < cost.size(); j++) {
			dp[j].first = dp[j - 1].second;
			dp[j].second = min(dp[j - 1].first + cost[j], dp[j - 1].second + cost[j]);
		}
		sub = min(sub, dp[cost.size() - 1].second);
		ans += sub;
	}
	cout << ans;
	return 0;
}