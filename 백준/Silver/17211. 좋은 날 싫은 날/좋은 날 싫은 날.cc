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

    int n, c;
    cin >> n >> c;

    ld p[2][2];
    cin >> p[0][0] >> p[0][1] >> p[1][0] >> p[1][1];

    vector<array<ld, 2>> dp(n+1);
    dp[0][c] = 1;

    for(int i = 1; i <= n; i++) {
        dp[i][0] = dp[i-1][0] * p[0][0] + dp[i-1][1]*p[1][0];
        dp[i][1] = dp[i-1][0] * p[0][1] + dp[i-1][1]*p[1][1];
    }

    cout << int(dp[n][0] * 1000) << "\n";
    cout << int(dp[n][1] * 1000) << "\n";

    return 0;
}