#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int board[101][101][101];

int m, n, h;

struct coord{
    int x;
    int y;
    int z;
};

bool mm(coord a) {
    if(a.x < 0 || a.x > n-1) return false;
    if(a.y < 0 || a.y > m-1) return false;
    if(a.z < 0 || a.z > h-1) return false;
    if(board[a.x][a.y][a.z] != 0) return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> m >> n >> h;

    int cnt = 0;
    queue<pair<int, coord>> _q;
    for(int k = 0; k < h; k++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> board[i][j][k];
                if(board[i][j][k] != -1) cnt++;
                if(board[i][j][k] == 1) _q.push({0,{i,j,k}});
            }
        }
    }
    

    int dx[] = {0, 0, -1, 1, 0, 0};
    int dy[] = {-1, 1, 0, 0, 0, 0};
    int dz[] = {0, 0, 0, 0, -1, 1};
    int ans = 0;
    while(!_q.empty()) {
        cnt--;
        auto u = _q.front(); _q.pop();
        ans = max(ans, u.first);
        coord pos = u.second;
        for(int i = 0; i < 6; i++) {
            if(mm({pos.x+dx[i],pos.y+dy[i],pos.z+dz[i]})) {
                board[pos.x+dx[i]][pos.y+dy[i]][pos.z+dz[i]] = 1;
                _q.push({u.first+1,{pos.x+dx[i],pos.y+dy[i],pos.z+dz[i]}});
            }
        }
    }
    if(cnt == 0) cout << ans;
    else cout << -1;

    return 0;
}