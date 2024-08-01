#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool _visit[1002][1002];
bool board[1002][1002];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            if(s[j] == 'X') board[i+1][j+1] = true;
        }
    }

    queue<pair<pii, int>> _q;

    int dx[] = {1, 0, -1, 0};
    int dy[] = {0, 1, 0, -1};
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(board[i][j]) {
                bool chk = true;
                for(int d = 0; d < 4; d++) {
                    chk &= board[i+dx[d]][j+dy[d]];
                }
                if(chk) continue;
                _q.emplace(pii(i,j), 1);
                _visit[i][j] = true;
            }
        }
    }
    int ans = 0;
    while(!_q.empty()) {
        auto[c, p] = _q.front(); _q.pop();
        int cx = c.first, cy = c.second;
        ans = max(ans, p);

        for(int d = 0; d < 4; d++) {
            int x = cx + dx[d];
            int y = cy + dy[d];
            if(board[x][y] && !_visit[x][y]) {
                _q.emplace(pii(x,y), p+1);
                _visit[x][y] = true;
            }
        }
    }

    cout << ans;

    return 0;
}