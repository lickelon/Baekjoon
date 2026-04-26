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
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;

    int ans = min(arr[0], arr[1]);
    for(int i = 2; i < n; i++) {
        int m = min(arr[i], arr[i-1]);
        ans = max(ans, m);
        if(m == arr[i]) ans = max(ans, min(arr[i-1], arr[i-2]));
        else ans = max(ans, min(arr[i], arr[i-2]));
    }
    cout << ans;

    return 0;
}