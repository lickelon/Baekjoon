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
    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    int k;
    cin >> k;
    vector<vector<int>> dp(n+1, vector<int>(3, 0));
    for(int i = 0; i <= n; i++) {
        if(i - k < 0) dp[i][0] = -1;
        else dp[i][0] = max(dp[i-1][0], arr[i]-arr[i-k]);
        if(i - k < 0 || dp[i-k][0] == -1) dp[i][1] = -1;
        else dp[i][1] = max(dp[i-1][1], dp[i-k][0] + arr[i]-arr[i-k]);
        if(i - k < 0 || dp[i-k][1] == -1) dp[i][2] = -1;
        else dp[i][2] = max(dp[i-1][2], dp[i-k][1] + arr[i]-arr[i-k]);
    }
    cout << dp[n][2];

    return 0;
}