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

    int n;
    cin >> n;
    int board[3][3] = {};
    int visit[3][3] = {};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    queue<pii> _q;
    _q.push({0,0});
    visit[0][0] = 1;
    while(!_q.empty()) {
        auto [cx,cy] = _q.front(); _q.pop();

        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, 1, 0, -1};
        for(int d = 0; d < 4; d++) {
            int x = dx[d]*board[cx][cy] + cx;
            int y = dy[d]*board[cx][cy] + cy;

            if(x < 0 || x >= n) continue;
            if(y < 0 || y >= n) continue;
            if(visit[x][y]) continue;

            _q.push({x,y});
            visit[x][y] = 1;
        }
    }

    cout << (visit[n-1][n-1] ? "HaruHaru" : "Hing");

    return 0;
}