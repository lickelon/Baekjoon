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

    int n, k, l;
    cin >> n >> k >> l;
    vector<ll> h(n);
    for(auto &u : h) cin >> u;
    vector<ll> c(n);
    for(int i = 0; i < k; i++) {
        int t;
        cin >> t;
        t--;
        c[t]++;
        if(t+l < n) c[t+l]--;
    }
    for(int i = 1; i < n; i++) {
        c[i] += c[i-1];
    }
    for(auto &u : c) u = min(32ll, u);
    sort(all(h));
    sort(all(c));

    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ans += (h[i] >> c[i]);
    }
    cout << ans;
    return 0;
}