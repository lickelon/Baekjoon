#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int board[503][503];
int visit[503][503];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = min(x1, x2) + 1; i <= max(x1, x2) + 1; i++) {
            for(int j = min(y1, y2) + 1; j <= max(y1, y2) + 1; j++) {
                board[i][j] = -1;
            }
        }
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = min(x1, x2) + 1; i <= max(x1, x2) + 1; i++) {
            for(int j = min(y1, y2) + 1; j <= max(y1, y2) + 1; j++) {
                board[i][j] = INF;
            }
        }
    }
    board[1][1] = 1;
    for(int i = 0; i < 503; i++) {
        board[0][i] = INF;
        board[502][i] = INF;
        board[i][0] = INF;
        board[i][502] = INF;
    }

    deque<pii> _dq;
    _dq.push_back({1,1});
    while(!_dq.empty()) {
        pii now = _dq.front(); _dq.pop_front();
        int x = now.first;
        int y = now.second;
        if(x == 501 && y == 501) {
            cout << board[x][y]-1;
            return 0;
        }
        pii dir[4] = {{-1,0},{0,-1},{1,0},{0,1}};
        for(int i = 0; i < 4; i++) {
            int nx = x + dir[i].first;
            int ny = y + dir[i].second;
            if(board[nx][ny] == -1) {
                board[nx][ny] = board[x][y] + 1;
                _dq.push_back({nx,ny});
            }
            if(board[nx][ny] == 0) {
                board[nx][ny] = board[x][y];
                _dq.push_front({nx,ny});
            }
        }
    }
    cout << -1;

    return 0;
}