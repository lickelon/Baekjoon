#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll dp[500][500];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;
    vector<pii> arr(n);
    for(auto &u : arr) cin >> u.first >> u.second;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            dp[i][j] = INF;
        }
    }
    dp[0][0] = 0;
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < i; j++) {
            for(int l = 0; l <= j; l++) {
                dp[i][j] = min(dp[i][j], dp[i-l-1][j-l] + abs(arr[i].first-arr[i-l-1].first) + abs(arr[i].second-arr[i-l-1].second));
            }
        }
    }
    cout << dp[n-1][k];

    return 0;
}