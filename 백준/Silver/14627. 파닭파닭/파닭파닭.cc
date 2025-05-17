#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

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

    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    for(auto &e : arr) cin >> e;
    
    ll lo = 0, hi = 1e9+1;
    while(lo + 1 < hi) {
        ll mid = (lo + hi) / 2;
        ll cnt = 0;
        for(auto e : arr) {
            cnt += e / mid;
        }
        if(cnt < m) hi = mid;
        else lo = mid;
    }

    ll ans = 0;
    for(auto e : arr) ans += e;
    ans -= lo * m;
    cout << ans;

    return 0;
}