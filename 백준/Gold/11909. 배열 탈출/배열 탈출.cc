#define _SILENCE_CXX17_C_HEADER_DEPRECATION_WARNING

#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<vector<int>> board(n, vector<int>(n));
    vector<vector<int>> dp(n, vector<int>(n, 1e9));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    dp[0][0] = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > 0) dp[i][j] = min(dp[i][j], dp[i - 1][j] + max(board[i][j] - board[i - 1][j] + 1, 0));
            if (j > 0) dp[i][j] = min(dp[i][j], dp[i][j - 1] + max(board[i][j] - board[i][j - 1] + 1, 0));
        }
    }
    cout << dp[n - 1][n - 1];

    return 0;
}