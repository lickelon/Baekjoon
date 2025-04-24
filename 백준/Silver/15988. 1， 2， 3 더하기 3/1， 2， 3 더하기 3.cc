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

    vector<ll> dp(1000001);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 4; i <= 1000000; i++) {
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3]) % 1000000009;
    }

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        cout << dp[n] << "\n";
    }

    return 0;
}