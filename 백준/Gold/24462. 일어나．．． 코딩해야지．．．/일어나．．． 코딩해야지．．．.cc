#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, d;
    cin >> n >> d;
    vector<pll> arr(n);
    for(auto &u : arr) cin >> u.second >> u.first;

    pll ans;
    ll M = -1;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            ll temp = 0;
            auto [ka, ta] = arr[i];
            auto [kb, tb] = arr[j];
            ll kab = (ka*kb/gcd(ka, kb));
            temp += (d/ka + 1ll) - (ta/ka);
            temp += (d/kb + 1ll) - (tb/kb);
            temp -= (d/kab + 1ll) - (max(ta, tb) / kab);
            if(max(ta, tb) % kab) temp += 1;
            if(temp > M) {
                ans = {i,j};
                M = temp;
            }
        }
    }

    cout << ans.first+1 << " " << ans.second+1 << "\n";
    cout << M;

    return 0;
}