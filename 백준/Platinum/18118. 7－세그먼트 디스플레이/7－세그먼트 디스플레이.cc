#include <bits/stdc++.h>

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> dp(n+1, vector<ll>(m));
    for(int i = 0; i <= 11; i++) {
        if(i == 10) continue;
        dp[1][i%m] = i;
    }

    for(ll i = 1; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            if(dp[i][j] == 0) continue;
            for(ll k = 0; k < 10; k++)
                dp[i+1][(j*10+k)%m] = max(dp[i+1][(j*10+k)%m], dp[i][j]*10+k);
            dp[i+1][(j*100+11)%m] = max(dp[i+1][(j*100+11)%m], dp[i][j]*100+11);
        }
    }
    cout << dp[n][0] << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        solve();
    }

    return 0;
}