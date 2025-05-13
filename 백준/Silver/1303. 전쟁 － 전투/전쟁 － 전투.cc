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
    vector<string> arr(m);
    for(auto &e : arr) cin >> e;

    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, -1, 0, 1};
    vector<vector<int>> visit(m, vector<int>(n, 0));
    int ansB = 0, ansW = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(visit[i][j]) continue;
            int cnt = 0;
            queue<pii> _q;
            _q.push({i, j});
            visit[i][j] = 1;
            cnt++;
            while(!_q.empty()) {
                pii curr = _q.front(); _q.pop();
                for(int d = 0; d < 4; d++) {
                    int x = curr.first + dx[d];
                    int y = curr.second + dy[d];
                    if(x < 0 || x >= m) continue;
                    if(y < 0 || y >= n) continue;
                    if(visit[x][y]) continue;
                    if(arr[x][y] != arr[i][j]) continue;
                    _q.push({x, y});
                    visit[x][y] = 1;
                    cnt++;
                }
            }
            if(arr[i][j] == 'W') ansW += cnt*cnt;
            else ansB += cnt*cnt;
        }
    }
    cout << ansW << " " << ansB;

    return 0;
}