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

    int n, m;
    cin >> n >> m;
    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        arr[i] = b;
    }

    map<int, ll> _m;
    for(int i = 0; i < m; i++) {
        ll u, v, c;
        cin >> u >> v >> c;
        if(arr[u] > arr[v]) {
            int temp = u;
            u = v;
            v = temp;
        }
        _m[arr[u]] += c;
        _m[arr[v]+1] -= c;
    }

    ll ans = 0;
    ll temp = 0;
    for(auto u : _m) {
        temp += u.second;
        ans = max(ans, temp);
    }
    cout << ans;

    return 0;
}