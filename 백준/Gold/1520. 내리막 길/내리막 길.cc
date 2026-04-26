#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int board[502][502];
int dp[505][505];
int m, n;

int dfs(int cx, int cy) {
    if(cx == n && cy == m) {
        return 1;
    }

    int &ret = dp[cx][cy];
    if(ret != -1) return ret;

    ret = 0;
    for(int i = 0; i < 4; i++) {
        if(board[cx][cy] > board[cx+dx[i]][cy+dy[i]]) {
            ret += dfs(cx+dx[i],cy+dy[i]);
        }
    }
    return ret;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //while(true) {
        cin >> m >> n;

        for(int i = 1; i <= m; i++) {
            for(int j = 1; j <= n; j++) {
                cin >> board[j][i];
            }
        }
        for(int i = 0; i < 502; i++) {
            for(int j = 0; j < 502; j++) {
                dp[i][j] = -1;
            }
        }
        for(int i = 0; i < m; i++) {
            board[0][i] = board[n+1][i] = 10001;
        }
        for(int i = 0; i < n; i++) {
            board[i][0] = board[i][m+1] = 10001;
        }
        
        cout << dfs(1,1) << "\n";
    //}
    

    return 0;
}