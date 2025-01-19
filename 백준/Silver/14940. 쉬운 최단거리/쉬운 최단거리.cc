#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> board(n+2, vector<int>(m+2));

    pii start;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> board[i][j];
            if(board[i][j] == 2) start = {i,j};
            if(board[i][j]) board[i][j] = -1;
        }
    }

    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    queue<pii> _q;
    _q.push(start);
    board[start.first][start.second] = 0;
    while(!_q.empty()) {
        pii curr = _q.front(); _q.pop();
        int d = board[curr.first][curr.second];
        for(int i = 0; i < 4; i++) {
            int x = curr.first + dx[i];
            int y = curr.second + dy[i];
            if(board[x][y] == -1) {
                _q.push({x, y});
                board[x][y] = d+1;
            }
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}