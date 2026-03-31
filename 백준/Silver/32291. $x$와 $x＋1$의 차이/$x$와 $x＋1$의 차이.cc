#include <bits/stdc++.h>

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll x;
    cin >> x;
    x += 1;

    set<ll> _s;
    for(ll i = 1; i * i <= x; i++) {
        if(x % i == 0) {
            _s.insert(i);
            _s.insert(x/i);
        }
    }
    _s.erase(x);
    for(auto e : _s) {
        cout << e << " ";
    }

    return 0;
}