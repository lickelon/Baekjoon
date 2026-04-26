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
    vector<int> arr1(n), arr2(n);
    for(auto &u : arr1) cin >> u;
    for(auto &u : arr2) cin >> u;
    sort(all(arr1));
    sort(all(arr2));
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ans += abs(arr1[i] - arr2[i]);
    }
    cout << ans;
    return 0;
}