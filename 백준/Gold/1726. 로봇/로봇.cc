#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int visit[102][102][4];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int m, n;
    cin >> m >> n;
    vector<vector<int>> board(m+2, vector<int>(n+2, 1));
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> board[i][j];
            for(int k = 0; k < 4; k++) {
                visit[i][j][k] = INF;
            }
        }
    }

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    int a, b, c;
    cin >> a >> b >> c;
    int ta, tb, tc;
    cin >> ta >> tb >> tc;
    c--, tc--;

    queue<pair<pii, int>> _q;
    _q.push({{a, b}, c});
    visit[a][b][c] = 0;
    while(!_q.empty()) {
        auto curr = _q.front(); _q.pop();
        int ca, cb, cc;
        tie(ca, cb) = curr.first;
        cc = curr.second;

        for(int i = 1; i <= 3; i++) {
            int na, nb, nc;
            na = ca+dy[cc]*i;
            nb = cb+dx[cc]*i;
            nc = cc;
            if(board[na][nb]) break;
            if(visit[ca][cb][cc]+1 >= visit[na][nb][nc]) continue;
            visit[na][nb][nc] = visit[ca][cb][cc]+1;
            _q.push({{na,nb},nc});
        }
        int nc = cc ^ 2;
        if(visit[ca][cb][cc]+1 < visit[ca][cb][nc]) {
            visit[ca][cb][nc] = visit[ca][cb][cc]+1;
            _q.push({{ca,cb},nc});
        }
        nc = cc ^ 3;
        if(visit[ca][cb][cc]+1 < visit[ca][cb][nc]) {
            visit[ca][cb][nc] = visit[ca][cb][cc]+1;
            _q.push({{ca,cb},nc});
        }
    }
    cout << visit[ta][tb][tc];

    return 0;
}