#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int board[102][102];
bool _visit[102][102];

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
            board[i+1][j+1] = s[j] - '0';
        }
    }

    queue<pair<pii, int>> _q;
    _q.push({{1,1},1});
    _visit[1][1] = true;
    while(!_q.empty()) {
        pair<pii, int> cur = _q.front(); _q.pop();
        int x = cur.first.first;
        int y = cur.first.second;
        int d = cur.second;
        if(x == n && y == m) {
            cout << d;
            return 0;
        }
        for(int i = 0; i < 4; i++) {
            if(!_visit[x+dx[i]][y+dy[i]] && board[x+dx[i]][y+dy[i]]) {
                _q.push({{x+dx[i],y+dy[i]}, d+1});
                _visit[x+dx[i]][y+dy[i]] = 1;
            }
        }
    }

    return 0;
}