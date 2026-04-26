#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool comp(pll &a, pll &b) {
    if(a.second == b.second) {
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<pll> arr(n);
    for(auto &u : arr) cin >> u.first >> u.second;

    ll ans = 0;
    sort(all(arr), comp);
    for(int i = 0; i < k; i++) {
        ans += arr[i].first;
    }
    vector<ll> arr2(n-k);
    for(int i = 0; i < n-k; i++) {
        arr2[i] = arr[i+k].first;
    }
    sort(all(arr2), greater<ll>());

    for(int i = 0; i < m; i++) {
        ans += arr2[i];
    }
    cout << ans;
    return 0;
}