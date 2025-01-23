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

    int n, k;
    cin >> n >> k;
    vector<pii> arr(n);
    for(auto &e : arr) cin >> e.second >> e.first;
    sort(all(arr));

    int l = 0;
    int sum = arr[0].second;
    int ans = sum;
    for(int r = 1; r < n; r++) {
        sum += arr[r].second;
        while(arr[r].first - 2*k > arr[l].first) {
            sum -= arr[l].second;
            l++;
        }
        ans = max(sum, ans);
    }
    cout << ans;

    return 0;
}