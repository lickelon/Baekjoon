#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

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
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;
    ranges::sort(arr);

    for(int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        cout << ranges::upper_bound(arr, r) - ranges::lower_bound(arr, l) << "\n";
    }

    return 0;
}