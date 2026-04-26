#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};

struct _data {
    int t;
    int dir; //lrud
    int speed;
    pii pos;
};

int board[101][101];
int _visit[101][101][4][15];
int n;

bool available(_data curr) {
    if(curr.pos.first < 0 || curr.pos.first >= n) return false;
    if(curr.pos.second < 0 || curr.pos.second >= n) return false;
    pii temp = curr.pos;
    int num = board[curr.pos.first][curr.pos.second];
    if(num && num <= curr.t) return false;
    for(int i = 1; i < curr.speed; i++) {
        int num = board[temp.first - i*dx[curr.dir]][temp.second - i*dy[curr.dir]];
        if(num && num < curr.t) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> board[i][j];
        }
    }

    queue<_data> _q;
    _data start;
    start.t = 0;
    start.dir = 0;
    start.speed = 0;
    start.pos = {0,0};
    _visit[0][0][0][0] = true;
    _q.push(start);
    while(!_q.empty()) {
        _data curr = _q.front(); _q.pop();
        if(curr.pos.first == n-1 && curr.pos.second == n-1) {
            cout << curr.t;
            return 0;
        }
        _data _next[4] = {};
        for(int i = 0; i < 4; i++) {
            _next[i].t = curr.t+1;
            _next[i].dir = i;
            _next[i].speed = (_next[i].dir == curr.dir ? curr.speed+1 : 1);
            _next[i].pos = {curr.pos.first + dx[i]*_next[i].speed, curr.pos.second + dy[i]*_next[i].speed};
        }
        for(auto u : _next) {;
            if(available(u)) {
                if(_visit[u.pos.first][u.pos.second][u.dir][u.speed]) continue;
                _q.push(u);
                _visit[u.pos.first][u.pos.second][u.dir][u.speed] = true;
            }
        }
    }
    cout << "Fired";
    return 0;
}