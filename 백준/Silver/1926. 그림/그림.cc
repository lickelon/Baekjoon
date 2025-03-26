#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int board[502][502];
int _visit[502][502];

int search(int x, int y) {
    int cnt = 1;

    queue<pii> _q;
    _q.push({x, y});
    _visit[x][y] = 1;

    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    while(!_q.empty()) {
        auto [cx, cy] = _q.front(); _q.pop();
        for(int d = 0; d < 4; d++) {
            int nx = cx + dx[d];
            int ny = cy + dy[d];
            if(board[nx][ny] && !_visit[nx][ny]) {
                _q.push({nx, ny});
                _visit[nx][ny] = 1;
                cnt++;
            }
        }
    }

    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> board[i][j];
        }
    }

    int ans = 0, cnt = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(board[i][j] && !_visit[i][j]) {
                int ret = search(i, j);
                ans = max(ret, ans);
                cnt++;
            }
        }
    }
    cout << cnt << "\n" << ans;

    return 0;
}