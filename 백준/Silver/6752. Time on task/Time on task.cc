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

    int T, n;
    cin >> T >> n;
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;
    sort(all(arr));
    int ans = 0;
    for(auto u : arr) {
        if(T < u) break;
        T -= u;
        ans++;
    }

    cout << ans;

    return 0;
}