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

    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;
    ranges::sort(arr);

    int l = 0;
    int ans = 5;
    for(int r = 0; r < n; r++) {
        while(arr[r] - arr[l] > 4) l++;
        ans = min(ans, 4 - (r-l));
    }
    cout << ans;

    return 0;
}