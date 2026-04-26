#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int board[52][52];
int _visit[52][52];
int ans[2500];
int n, m;
//queue<pii> next_sea;
//queue<pii> curr_sea;
bool validCoord(int x, int y) {
    if(x < 0 || y < 0 || x > n+1 || y > m+1) return false;
    return true;
}

int land(int x, int y);

int sea(int x, int y) {
    queue<pii> curr_sea;
    curr_sea.push({x,y});
    queue<pii> _land;
    while(!curr_sea.empty()) {
        pii curr = curr_sea.front(); curr_sea.pop();
        for(int dx = -1; dx <= 1; dx++) {
            for(int dy = -1; dy <= 1; dy++) {
                if(dx*dy != 0) continue;
                int x = curr.first+dx;
                int y = curr.second+dy;
                if(!validCoord(x,y)) continue;
                if(_visit[x][y]) continue;
                if(board[x][y]) {
                    _land.push({x,y});
                }
                else {
                    curr_sea.push({x, y});
                    _visit[x][y] = true;
                }
            }
        }
    }
    int ret = 0;
    while(!_land.empty()) {
        pii curr = _land.front(); _land.pop();
        if(_visit[curr.first][curr.second]) continue;
        int res = land(curr.first, curr.second);
        ans[res]++;
        ret = max(ret, res);
    }
    return ret;
}

int land(int x, int y) {
    _visit[x][y] = true;
    queue<pii> _q;
    queue<pii> next_sea;
    _q.push({x,y});
    while(!_q.empty()) {
        pii curr = _q.front(); _q.pop();
        for(int dx = -1; dx <= 1; dx++) {
            for(int dy = -1; dy <= 1; dy++) {
                int x = curr.first+dx;
                int y = curr.second+dy;
                if(!validCoord(x,y)) continue;
                if(_visit[x][y]) continue;
                if(board[x][y]) {
                    _q.push({x,y});
                    _visit[x][y] = true;
                }
                else next_sea.push({x, y});
            }
        }
    }
    int ret = 0;
    while(!next_sea.empty()) {
        pii curr = next_sea.front(); next_sea.pop();
        if(_visit[curr.first][curr.second]) continue;
        int res = sea(curr.first, curr.second);
        ret = max(ret, res);
    }
    return 1+ret;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            if(s[j] == 'x') {
                board[i+1][j+1] = 1;
            }
            else {
                board[i+1][j+1] = 0;
            }
        }
    }
    
    sea(0,0);

    if(ans[1] == 0) {
        cout << -1;
        return 0;
    }
    int i = 1;
    while(ans[i]) {
        cout << ans[i++] << " ";
    }

    return 0;
}