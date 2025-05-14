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

    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    vector<vector<int>> visit(n, vector<int>(m, 0));
    for(auto &e : arr) cin >> e;

    queue<pii> _q;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(arr[i][j] == 'I') {
                _q.push({i,j});
                visit[i][j] = 1;
            }
        }
    }

    int ans = 0;
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};
    while(!_q.empty()) {
        pii curr = _q.front(); _q.pop();
        for(int d = 0; d < 4; d++) {
            int x = curr.first + dx[d];
            int y = curr.second + dy[d];

            if(x < 0 || x >= n) continue;
            if(y < 0 || y >= m) continue;
            if(visit[x][y]) continue;
            if(arr[x][y] == 'X') continue;

            if(arr[x][y] == 'P') ans++;
            _q.push({x, y});
            visit[x][y] = 1;
        }
    }
    if(ans == 0) cout << "TT";
    else cout << ans;

    return 0;
}