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

    int n;
    cin >> n;
    vector<vector<ll>> board(n, vector<ll>(n));
    vector<vector<ll>> dp(n, vector<ll>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    dp[0][0] = 1;
    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            if(board[i][j] == 0) continue;
            if(j + board[i][j] < n) dp[i][j+board[i][j]] += dp[i][j];
            if(i + board[i][j] < n) dp[i+board[i][j]][j] += dp[i][j];
        }
    }
    cout << dp[n-1][n-1];

    return 0;
}