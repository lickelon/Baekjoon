#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll board[1001][1001];
ll dp[1001][1001];

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
    dp[0][0] = board[0][0];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(i == 0 && j == 0) continue;
            if(i == 0) {
                dp[i][j] = board[i][j] + dp[i][j-1];
                continue;
            }
            if(j == 0) {
                dp[i][j] = board[i][j] + dp[i-1][j];
                continue;
            }
            dp[i][j] = board[i][j] + min(dp[i-1][j], dp[i][j-1]);
        }
    }
    ll h;

    cin >> h;
    if(h >= dp[n-1][m-1]) {
        cout << "YES\n";
        cout << dp[n-1][m-1];
    } 
    else {
        cout << "NO\n";
    }

    return 0;
}