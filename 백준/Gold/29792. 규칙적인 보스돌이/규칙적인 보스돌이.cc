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

    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> arr(n);
    for(auto &u : arr) cin >> u;
    vector<pll> boss(k);
    for(auto &u : boss) cin >> u.first >> u.second;
    vector<ll> reward(n);
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < (1 << k); j++) {
            ll sum = 0;
            ll left = 900;
            for(int t = 0; t < k; t++) {
                if((1 << t) & j) {
                    left -= ((boss[t].first - 1ll) / arr[i]) + 1ll;
                    sum += boss[t].second;
                }
            }
            if(left >= 0) {
                reward[i] = max(reward[i], sum);
            }
        }
    }
    sort(all(reward), greater<ll>());
    ll ans = 0;
    for(int i = 0; i < m; i++) {
        ans += reward[i];
    }
    cout << ans;

    return 0;
}