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

    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n+1, vector<int>(m));
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            arr[i][j] += arr[i-1][j];
        }
    }

    vector<vector<int>> dp(n+1, vector<int>(m, -10000));
    for(int curr = 1; curr <= n; curr++) {
        vector<int> ans(m, -10000);
        for(int i = curr; i <= n; i++) {
            vector<int> ltr(m);
            vector<int> rtl(m);
            ltr[0] = arr[i][0]-arr[curr-1][0];
            for(int j = 1; j < m; j++) {
                int temp = arr[i][j]-arr[curr-1][j];
                ltr[j] = max(temp + ltr[j-1], temp);
            }
            rtl[m-1] = arr[i][m-1]-arr[curr-1][m-1];
            for(int j = m-2; j >= 0; j--) {
                int temp = arr[i][j] - arr[curr-1][j];
                rtl[j] = max(temp + rtl[j+1], temp);
            }
            dp[i][0] = max(dp[i][0], max({ltr[0] + rtl[1], ltr[0], rtl[0]}));
            for(int j = 1; j < m-1; j++) {
                dp[i][j] = max(dp[i][j], max({ltr[j] + rtl[j+1], ltr[j], rtl[j], rtl[j] +ltr[j-1]}));
            }
            dp[i][m-1] = max(dp[i][m-1], max({ltr[m-1], rtl[m-1], rtl[m-1] + ltr[m-2]}));
            for(int j = 0; j < m; j++) {
                ans[j] = max(ans[j], dp[i][j]);
            }
        }
        for(auto e : ans) cout << e << " ";
        cout << "\n";
    }

    return 0;
}