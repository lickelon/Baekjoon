#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int board[1001][1001];

int m, n;

bool mm(int x, int y) {
    if(x < 0 || x > n-1 || y < 0 || y > m-1) return false;
    if(board[x][y] != 0) return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> m >> n;

    int cnt = 0;
    queue<pair<int, pii>> _q;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> board[i][j];
            if(board[i][j] != -1) cnt++;
            if(board[i][j] == 1) _q.push({0,{i,j}});
        }
    }

    int dx[] = {0, 0, -1, 1};
    int dy[] = {-1, 1, 0, 0};
    int ans = 0;
    while(!_q.empty()) {
        cnt--;
        auto u = _q.front(); _q.pop();
        ans = max(ans, u.first);
        pii pos = u.second;
        for(int i = 0; i < 4; i++) {
            if(mm(pos.first+dx[i],pos.second+dy[i])) {
                board[pos.first+dx[i]][pos.second+dy[i]] = 1;
                _q.push({u.first+1,{pos.first+dx[i],pos.second+dy[i]}});
            }
        }
    }
    if(cnt == 0) cout << ans;
    else cout << -1;

    return 0;
}