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
    cin >> n;
    vector<pll> arr(n);
    for(auto &u : arr) {
        cin >> u.first >> u.second;
    }
    sort(all(arr));
    ll l = arr[0].second, r = arr[n-1].second;
    ll ans;
    for(int i = 1; i < n; i++) {
        if(i == n-1) ans = l;
        l += arr[i].second;
        l += (i) * (arr[i].first - arr[i-1].first);
    }
    for(int i = n-2; i >= 0; i--) {
        if(i == 0) ans = min(ans, r);
        r += arr[i].second;
        r += (n-1-i) * (arr[i+1].first - arr[i].first);
    }
    for(int i = 0; i < n; i++) {
        ans = min(ans, l - (arr[i].second + arr[n-1].first - arr[i].first));
        ans = min(ans, r - (arr[i].second + arr[i].first - arr[0].first));
    }
    cout << ans;

    return 0;
}