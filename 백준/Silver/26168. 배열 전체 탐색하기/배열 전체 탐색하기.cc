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
    vector<ll> arr(n);
    for(auto &e : arr) cin >> e;
    sort(all(arr));

    while(m--) {
        ll q;
        cin >> q;
        if(q == 1) {
            ll i;
            cin >> i;
            cout << arr.end() - lower_bound(all(arr), i) << "\n";
        }
        if(q == 2) {
            ll i;
            cin >> i;
            cout << arr.end() - upper_bound(all(arr), i) << "\n";
        }
        if(q == 3) {
            ll i, j;
            cin >> i >> j;
            cout << upper_bound(all(arr), j) - lower_bound(all(arr), i) << "\n";
        }
    }

    return 0;
}