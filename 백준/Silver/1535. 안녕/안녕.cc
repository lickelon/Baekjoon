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
    for(auto &[a, _] : arr) cin >> a;
    for(auto &[_, b] : arr) cin >> b;

    int dp[21][100] = {};
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 100; j++) {
            dp[i+1][j] = max(dp[i][j], (j >= arr[i].first ? dp[i][j-arr[i].first] + arr[i].second : 0));
        }
    }
    cout << dp[n][99];

    return 0;
}