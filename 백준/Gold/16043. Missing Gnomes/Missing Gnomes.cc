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
    vector<int> arr(m);
    map<int, bool> _m;
    for(auto &u : arr) {
        cin >> u;
        _m[u] = true;
    }
    vector<int> l;
    for(int i = 1; i <= n; i++) {
        if(!_m[i]) l.emplace_back(i);
    }

    int idx = 0;
    for(int i = 0; i < m; i++) {
        while(idx < l.size() && l[idx] < arr[i]) {
            cout << l[idx++] << "\n";
        }
        cout << arr[i] << "\n";
    }
    while(idx < l.size()) {
        cout << l[idx++] << "\n";
    }

    return 0;
}