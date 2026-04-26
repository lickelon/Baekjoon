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
    vector<int> arr(n*2);
    for(auto &u : arr) cin >> u;
    sort(all(arr));

    int ans = INF;
    for(int i = 0; i < n; i++) {
        ans = min(ans, arr[i] + arr[n*2-i-1]);
    }
    cout << ans;

    return 0;
}