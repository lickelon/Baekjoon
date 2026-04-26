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
    int dp[100001][4] = {};
    dp[0][0] = 1;
    dp[1][1] = 1;
    dp[2][2] = 1;
    dp[3][1] = 1;
    dp[3][2] = 1;
    dp[3][3] = 1;
    for(int i = 4; i < 100001; i++) {
        for(int j = 1; j <= 3; j++) {
            for(int k = 1; k <= 3; k++) {
                if(j == k) continue;
                dp[i][j] += dp[i-j][k];
                dp[i][j] %= 1000000009;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;
        int ans = dp[t][1];
        ans += dp[t][2];
        ans %= 1000000009;
        ans += dp[t][3];
        ans %= 1000000009;
        cout << ans << "\n";
    }

    return 0;
}