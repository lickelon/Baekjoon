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

    int n, e;
    cin >> n >> e;
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;
    sort(all(arr));

    int ans = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] - arr[i-1] >= e) ans++;
    }
    cout << ans;
    return 0;
}