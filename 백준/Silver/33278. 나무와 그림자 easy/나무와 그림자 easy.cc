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

    ll n, t;
    cin >> n >> t;

    vector<pll> arr(n);
    for(auto &e : arr) cin >> e.first >> e.second;
    sort(all(arr));

    ll ans = 0;
    pll before = arr[0];
    for(int i = 1; i < n; i++) {
        ll temp = (arr[i].first - before.first) * (-t) + before.second;
        ans += max(0ll, min(temp, arr[i].second));
        before = {arr[i].first, max(temp, arr[i].second)};
    }
    cout << ans;

    return 0;
}