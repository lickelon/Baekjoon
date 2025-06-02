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

    while(true) {
        int n, m;
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        vector<string> board(n);
        for(auto &e : board) cin >> e;

        int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
        int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int cnt = 0;
                if(board[i][j] == '*') continue;
                for(int d = 0; d < 8; d++) {
                    int x = i + dx[d];
                    int y = j + dy[d];
                    if(x < 0 || x >= n) continue;
                    if(y < 0 || y >= m) continue;
                    if(board[x][y] == '*') cnt++;
                }
                board[i][j] = cnt + '0';
            }
        }
        for(auto e : board) {
            cout << e << '\n';
        }
    }

    return 0;
}