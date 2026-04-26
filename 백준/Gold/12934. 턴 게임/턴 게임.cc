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

    ll x, y;
    cin >> x >> y;
    ll n = 0;
    ll temp = x + y;
    while(temp >= n) {
        temp -= n;
        n++;
    }
    if(temp != 0) {
        cout << -1;
        return 0;
    }
    n--;

    ll ans = 0;
    for(ll i = n; i > 0; i--) {
        if(x >= i) {
            x -= i;
            ans++;
        }
    }
    assert(x == 0);
    cout << ans;
    return 0;
}