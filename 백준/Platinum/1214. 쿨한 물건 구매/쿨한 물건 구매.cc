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

    ll d, p, q;
    cin >> d >> p >> q;
    if(p < q) swap(p, q);

    ll ans = INF;
    for(ll i = 0; i < min(d/q, q) + 1; i++) {
        ll l = max(d - i*p, 0ll);
        ll c = l / q + !!(l % q);
        ans = min(ans, i*p + c*q);
    }
    cout << ans;

    return 0;
}