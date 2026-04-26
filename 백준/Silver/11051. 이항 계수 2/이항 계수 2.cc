#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int dp[1001][1001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;

    cin >> N >> K;

    for(int i = 0; i <= N; i++)
        dp[i][0] = dp[i][i] = 1;

    for(int i = 2; i <= N; i++)
        for(int j = 1; j < i; j++)
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;

    cout << dp[N][K];
    return 0;
}