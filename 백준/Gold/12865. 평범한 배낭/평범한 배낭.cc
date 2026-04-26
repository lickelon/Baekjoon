#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int dp[101][100001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, K;
    cin >> N >> K;
    vector<pii> arr(N+1);

    for(int i = 1; i <= N; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= K; j++) {
            if(j - arr[i].first >= 0) dp[i][j] = max(dp[i-1][j], dp[i-1][j-arr[i].first] + arr[i].second);
            else dp[i][j] = dp[i-1][j];
        }
    }

    cout << dp[N][K];

    return 0;
}