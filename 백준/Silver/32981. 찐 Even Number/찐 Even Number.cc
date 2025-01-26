#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define MOD 1000000007

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll d_pow(ll a, ll b) {
    if(b == 0) return 1;
    ll sub = d_pow(a, b/2);
    ll res = ((sub % MOD) * (sub % MOD)) % MOD;
    if(b % 2) res = (res * a) % MOD;
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int q;
    cin >> q;
    while(q--) {
        int n;
        cin >> n;
        ll ans = 4;
        ans *= d_pow(5, n-1);
        ans %= MOD;
        if(n == 1) ans = 5;
        cout << ans << "\n";
    }

    return 0;
}