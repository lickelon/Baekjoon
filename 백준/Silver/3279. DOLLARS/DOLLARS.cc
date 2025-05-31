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
    cout.precision(2);
    cout << fixed;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;

    ld ans = 100;
    for(int i = 1; i < n; i++) {
        ld p = (ld)(arr[i-1]) / arr[i];
        ans = max(ans, ans*p);
    }
    cout << ans;

    return 0;
}