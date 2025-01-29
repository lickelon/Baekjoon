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
    for(auto &e : arr) cin >> e.first >> e.second;
    arr.push_back({0, -1});
    arr.push_back({0, 100001});
    sort(all(arr), [](pii a, pii b){
        if(a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    });

    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        ll d = INF;
        if(arr[i].second == arr[i-1].second) d = min(d, abs(arr[i].first - arr[i-1].first));
        if(arr[i].second == arr[i+1].second) d = min(d, abs(arr[i].first - arr[i+1].first));
        if(d != INF) ans += d;
    }
    cout << ans;

    return 0;
}