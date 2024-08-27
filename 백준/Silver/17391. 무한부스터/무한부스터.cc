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

    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    vector<vector<int>> dp(n, vector<int>(m, INF));
    dp[0][0] = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            for(int k = 1; k <= arr[i][j]; k++) {
                if(i+k < n) dp[i+k][j] = min(dp[i+k][j], dp[i][j]+1);
                if(j+k < m) dp[i][j+k] = min(dp[i][j+k], dp[i][j]+1);
            }
        }
    }
    cout << dp[n-1][m-1];


    return 0;
}