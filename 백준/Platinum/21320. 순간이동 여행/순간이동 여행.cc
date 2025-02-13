#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define MOD 1000000007

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<ll> cnt(n, 1);
    for(int i = 1; i < k; i++) {
        cnt[n-i] -= 1;
        cnt[n-i-1] += 2;
    }

    vector<ll> dp(n);
    dp[1] = 1;
    dp[2] = 1;
    int sum = 1;
    for(int i = 3; i < n; i++) {
        dp[i] = (1 + sum*2) % MOD;
        sum = (sum + dp[i-1]) % MOD;
    }
    ll ans = 0;
    for(int i = 1; i < n; i++) {
        ans += (cnt[i] * dp[i]) % MOD;
        ans %= MOD;
    }
    cout << ans;

    return 0;
}