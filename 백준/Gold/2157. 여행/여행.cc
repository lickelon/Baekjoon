#include <bits/stdc++.h>

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<pii>> edge(n+1, vector<pii>());
    vector<vector<int>> dp(n+1, vector<int>(m+1, -1));

    for(int i = 0; i < k; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a > b) continue;
        edge[a].emplace_back(b, c);
    }

    dp[1][1] = 0;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(dp[i][j] == -1) continue;
            for(auto [e, k] : edge[i]) {
                dp[e][j+1] = max(dp[e][j+1], dp[i][j] + k);
            }
        }
    }
    int ans = 0;
    for(int i = 0; i <= m; i++) {
        ans = max(ans, dp[n][i]);
    }
    cout << ans;
    

    return 0;
}