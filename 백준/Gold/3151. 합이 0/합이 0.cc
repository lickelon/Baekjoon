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
    sort(all(arr));
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            int sum = arr[i] + arr[j];
            ans += upper_bound(arr.begin() + j + 1, arr.end(), -sum)
                  -lower_bound(arr.begin() + j + 1, arr.end(), -sum);
        }
    }
    cout << ans;

    return 0;
}