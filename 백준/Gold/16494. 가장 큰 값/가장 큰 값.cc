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

    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;

    vector<vector<array<int, 2>>> dp(n, vector<array<int, 2>>(m+1, {-2000,-2000}));
    dp[0][0][0] = 0;
    dp[0][1][1] = arr[0];
    for(int i = 1; i < n; i++) {
        dp[i][0][0] = 0;
        for(int j = 1; j <= min(i+1, m); j++) {
            dp[i][j][0] = max(dp[i-1][j][0], dp[i-1][j][1]);
            dp[i][j][1] = max({dp[i-1][j-1][0], dp[i-1][j-1][1], dp[i-1][j][1]}) + arr[i];
        }
    }
    cout << max(dp[n-1][m][0], dp[n-1][m][1]);

    return 0;
}