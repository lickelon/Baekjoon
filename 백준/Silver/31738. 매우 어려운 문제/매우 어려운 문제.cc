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

    ll n, m;
    cin >> n >> m;
    ll ans = 1;
    for(ll i = 1; i <= min(n, m); i++) {
        ans *= (i % m);
        ans %= m;
    }
    cout << ans;

    return 0;
}