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

    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for(auto &u : arr) cin >> u;
    sort(all(arr));
    
    ll ans = 1e18;
    for(ll i = 1; i < n; i++) {
        ll v = arr[0]*i + arr[i]*(n-i);
        ans = min(ans, (k+v-1)/v);
    }

    cout << ans;

    return 0;
}