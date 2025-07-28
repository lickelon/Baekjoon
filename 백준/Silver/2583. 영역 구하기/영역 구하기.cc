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

    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> board(n, vector<int>(m));
    vector<vector<int>> visit(n, vector<int>(m));

    for(int i = 0; i < k; i++) {
        int ay, ax, by, bx;
        cin >> ay >> ax >> by >> bx;
        for(int y = ay; y < by; y++) {
            for(int x = ax; x < bx; x++) {
                board[x][y] = 1;
            }
        }
    }

    vector<int> ans;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(visit[i][j]) continue;
            if(board[i][j]) continue;

            queue<pii> _q;
            _q.push({i,j});
            visit[i][j] = 1;
            int cnt = 0;
            while(!_q.empty()) {
                auto &[cx, cy] = _q.front(); _q.pop();
                int dx[] = {-1, 0, 1, 0};
                int dy[] = {0, -1, 0, 1};
                for(int d = 0; d < 4; d++) {
                    int x = cx + dx[d];
                    int y = cy + dy[d];
                    if(x < 0 || x >= n) continue;
                    if(y < 0 || y >= m) continue;
                    if(board[x][y]) continue;
                    if(visit[x][y]) continue;
                    _q.push({x, y});
                    visit[x][y] = 1;
                }
                cnt++;
            }
            ans.push_back(cnt);
        }
    }
    ranges::sort(ans);
    cout << ans.size() << "\n";
    for(auto e : ans) cout << e << " ";

    return 0;
}