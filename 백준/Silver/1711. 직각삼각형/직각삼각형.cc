#include <bits/stdc++.h>

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll dist(pll a, pll b) {
    ll dx = a.first - b.first;
    ll dy = a.second - b.second;
    return dx*dx + dy*dy;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<pll> arr(n);
    for(auto &[a, b] : arr) cin >> a >> b;

    ll cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            for(int k = j+1; k < n; k++) {
                ll x = dist(arr[i], arr[j]), y = dist(arr[j], arr[k]), z = dist(arr[k], arr[i]);
                ll M = max({x, y, z});
                if(x + y + z - M == M) cnt++;
            }
        }
    }
    cout << cnt;

    return 0;
}