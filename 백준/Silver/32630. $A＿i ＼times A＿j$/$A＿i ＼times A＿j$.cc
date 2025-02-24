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
    vector<ll> arr(n);
    for(auto &e : arr) cin >> e;
    sort(all(arr));

    ll sum = 0;
    for(auto e : arr) sum += e;

    ll ans = sum;
    ans = max(ans, sum - (arr[0]+arr[1]) + 2ll*arr[0]*arr[1]);
    ans = max(ans, sum - (arr[n-1]+arr[n-2]) + 2ll*arr[n-1]*arr[n-2]);

    cout << ans;

    return 0;
}