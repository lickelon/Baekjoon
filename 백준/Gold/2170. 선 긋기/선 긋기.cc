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
    vector<pii> arr(n);
    for(auto &u : arr) cin >> u.first >> u.second;
    sort(all(arr));
    int ans = 0;
    int e = -INF;
    for(auto u : arr) {
        int temp = u.second - max(u.first, e);
        ans += max(temp, 0);
        e = max(e, u.second);
    }
    cout << ans;

    return 0;
}