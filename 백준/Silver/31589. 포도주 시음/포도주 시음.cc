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

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;
    arr.emplace_back(0);
    sort(all(arr));

    ll ans = 0;
    for(int i = 0; i*2 < k; i++) {
        ans += arr[n-i] - arr[i];
    }
    cout << ans;

    return 0;
}