#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<pii> arr(n);
    for(auto &u : arr) {
        cin >> u.first >> u.second;
    }
    vector<int> dp(n+1);
    for(int i = 0; i < n; i++) {
        dp[i] = max(dp[i], dp[i-1]);
        int td = i + arr[i].first;
        if(td > n) continue;
        dp[td] = max(dp[td], dp[i] + arr[i].second);
    }

    cout << max(dp[n-1], dp[n]);

    return 0;
}