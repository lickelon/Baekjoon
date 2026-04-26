#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int dp[21][201];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;
    vector<pii> arr(M+1);
    for(int i = 1; i <= M; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    for(int i = 1; i <= M; i++) {
        for(int j = 0; j <= N; j++) {
            dp[i][j] = dp[i-1][j];
            if(j - arr[i].first >= 0)
                dp[i][j] = max(dp[i-1][j-arr[i].first] + arr[i].second, dp[i-1][j]);
        }
    }

    cout << dp[M][N];

    return 0;
}