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
    ll k;
    cin >> n >> k;

    unordered_map<ll, ll> _m;
    for(int i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;
        _m[y - x*k] += 1;
    }

    ll ans = 0;
    for(auto u : _m) {
        ans += u.second * (u.second - 1);
    }
    cout << ans;

    return 0;
}