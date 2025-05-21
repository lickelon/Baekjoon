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

    int n;
    cin >> n;
    vector<ll> arr(n);
    for(auto &e : arr) cin >> e;
    reverse(all(arr));
    ll ans = 0;
    ll m = INF;
    for(auto e : arr) {
        m = min(m, e);
        ans += m;
    }
    cout << ans;

    return 0;
}