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

    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    vector<ll> arr(n);
    for(auto &u : arr) cin >> u;
    for(int i = 1; i < 1 << n; i++) {
        ll total = 1;
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if(i & (1 << j)) {
                total *= arr[j];
                cnt++;
            }
        }
        ans += (cnt % 2 ? 1 : -1) * (m / total);
    }
    cout << ans;

    return 0;
}