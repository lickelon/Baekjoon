#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll dp[40][40];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int r, c, w;
    cin >> r >> c >> w;
    
    for(int i = 1; i < 40; i++) {
        dp[i][1] = 1;
        dp[i][i] = 1;
    }

    for(int i = 2; i < 40; i++) {
        for(int j = 2; j < 40; j++) {
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
        }
    }
    ll ans = 0;
    for(int i = 0; i < w; i++) {
        for(int j = 0; j < i + 1; j++) {
            ans += dp[r+i][c+j];
        }
    }
    cout << ans;

    return 0;
}