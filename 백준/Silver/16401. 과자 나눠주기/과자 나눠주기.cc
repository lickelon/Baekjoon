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

    ll m, n;
    cin >> m >> n;
    vector<ll> arr(n);
    for(auto &e : arr) cin >> e;

    ll lo = 0, hi = 1e9+1;
    while(lo + 1 < hi) {
        ll mid = (lo + hi) / 2;
        ll cnt = 0;
        for(auto e : arr) {
            cnt += e/mid;
        }
        if(cnt < m) hi = mid;
        else lo = mid;
    }
    cout << lo;

    return 0;
}