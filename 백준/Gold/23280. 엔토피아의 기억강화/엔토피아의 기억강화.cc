#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll dp[10001][13][13];
pll pos[13] = {{},{0,0},{0,1},{0,2},{1,0},{1,1},{1,2},{2,0},{2,1},{2,2},{3,0},{3,1},{3,2}};

ll dist(pll a, pll b) {
    return abs(a.first - b.first) + abs(a.second - b.second);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    ll a, b;
    cin >> a >> b;
    deque<int> arr(n);
    for(auto &u : arr) cin >> u;
    arr.push_front(0);
    for(int k = 0; k <= n; k++) {
        for(int i = 1; i <= 12; i++) {
            for(int j = 1; j <= 12; j++) {
                dp[k][i][j] = INF;
            }
        }
    }
    //fill(&dp[0][0][0], &dp[10000][12][13], INF);
    dp[0][1][3] = 0;
    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= 12; i++) {
            for(int j = 1; j <= 12; j++) {
                dp[k][i][arr[k]] = min(dp[k][i][arr[k]], dp[k-1][i][j] + dist(pos[j], pos[arr[k]]) + b);
                dp[k][arr[k]][j] = min(dp[k][arr[k]][j], dp[k-1][i][j] + dist(pos[i], pos[arr[k]]) + a);
            }
        }
    }
    ll ans = INF;
    for(int i = 1; i <= 12; i++) {
        for(int j = 1; j <= 12; j++) {
            ans = min(ans, dp[n][i][j]);
        }
    }
    cout << ans;
    return 0;
}