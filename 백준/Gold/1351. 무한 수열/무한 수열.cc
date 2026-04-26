#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

unordered_map<ll, ll> _m;
ll p, q;

ll dp(ll n) {
    if(_m.find(n) != _m.end())
        return _m[n];
    return _m[n] = (dp(n/p) + dp(n/q));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;
    cin >> n >> p >> q;
    _m[0] = 1;
    cout << dp(n);

    return 0;
}