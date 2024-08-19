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

    int ans = 0;
    int M = -INF, m = INF;
    for(auto u : arr) {
        M = max(M, u.first + u.second);
        m = min(m, u.first + u.second);
    }
    ans = max(ans, M-m);
    M = -INF, m = INF;
    for(auto u : arr) {
        M = max(M, u.first - u.second);
        m = min(m, u.first - u.second);
    }
    ans = max(ans, M-m);
    cout << ans;
    return 0;
}