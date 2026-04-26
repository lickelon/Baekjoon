#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll dp[34][34][3];
bool board[34][34];
pii dir[3] = {{0, 1}, {1, 0}, {1, 1}};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin >> N;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            int a;
            cin >> a;
            if(a == 0) {
                board[i][j] = true;
            }
        }
    }

    dp[0][0][0] = 1;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            for(int k = 0; k < 3; k++) {
                if(k != 1) {
                    if(board[i+dir[k].first][j+dir[k].second] && board[i+dir[k].first][j+dir[k].second + 1])
                        dp[i+dir[k].first][j+dir[k].second][0] += dp[i][j][k];
                }
                if(k != 0) {
                    if(board[i+dir[k].first][j+dir[k].second] && board[i+dir[k].first + 1][j+dir[k].second])
                        dp[i+dir[k].first][j+dir[k].second][1] += dp[i][j][k];
                }
                if(board[i+dir[k].first][j+dir[k].second] && board[i+dir[k].first][j+dir[k].second + 1]
                   && board[i+dir[k].first + 1][j+dir[k].second] && board[i+dir[k].first + 1][j+dir[k].second + 1])
                    dp[i+dir[k].first][j+dir[k].second][2] += dp[i][j][k];
            }
        }
    }

    ll ans = 0;
    ans += dp[N-1][N-2][0];
    ans += dp[N-2][N-1][1];
    ans += dp[N-2][N-2][2];

    cout << ans;

    return 0;
}