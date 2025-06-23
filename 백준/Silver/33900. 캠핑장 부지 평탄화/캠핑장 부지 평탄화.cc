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

    int n, m, r, c;
    cin >> n >> m >> r >> c;

    vector<vector<int>> board(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> board[i][j];            
        }
    }

    vector<vector<int>> sector(r, vector<int>(c));
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> sector[i][j];
        }
    }
    int ans = 0;
    for(int i = 0; i <= n - r; i++) {
        for(int j = 0; j <= m - c; j++) {
            bool flag = true;
            int p = board[i][j] - sector[0][0];
            for(int x = 0; x < r; x++) {
                for(int y = 0; y < c; y++) {
                    flag &= (board[i+x][j+y] - sector[x][y]) == p;
                }
            }
            if(flag) ans++;
        }
    }
    cout << ans << "\n";

    return 0;
}