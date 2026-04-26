#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int board[1000][1000];

int X1, Y1, X2, Y2;

bool check(int x, int y, int dir) {
    if(dir == 0) {
        return ((X1 == X2 && X1 == x) && 
                (Y1 <= y && y < Y2));
    }
    if(dir == 1) {
        return ((Y1 == Y2 && Y1 == y) && 
                (X1 <= x && x < X2));
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    cin >> X1 >> Y1 >> X2 >> Y2;
    if(X1 > X2) swap(X1, X2);
    if(Y1 > Y2) swap(Y1, Y2);

    vector<vector<int>> dp(n, vector<int>(m, -INF));
    dp[0][0] = board[0][0];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(dp[i][j] == -INF) continue;
            if(i+1 < n && !check(i+1, j, 0)) {
                dp[i+1][j] = max(dp[i+1][j], dp[i][j] + board[i+1][j]);
            }
            if(j+1 < m && !check(i, j+1, 1)) {
                dp[i][j+1] = max(dp[i][j+1], dp[i][j] + board[i][j+1]);
            }
        }
    }
    if(dp[n-1][m-1] == -INF) cout << "Entity";
    else cout << dp[n-1][m-1];
    return 0;
}