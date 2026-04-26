#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int board[1002][1002];
int visit[1002][1002];

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;
    for(int i = 1; i <= N; i++) {
        string s;
        cin >> s;
        for(int j = 1; j <= M; j++) {
            if(s[j-1] == '0') {
                board[i][j] = 1;
            }
        }
    }

    queue<pii> _q;
    for(int j = 1; j <= M; j++) {
        if(board[1][j]) {
            _q.push({1,j});
            visit[1][j] = 1;
        }
    }

    while(!_q.empty()) {
        pii temp = _q.front(); _q.pop();
        if(temp.first == N) {
            cout << "YES";
            return 0;
        }
        for(int i = 0; i < 4; i++) {
            int x = temp.first+dx[i];
            int y = temp.second+dy[i];
            if(board[x][y] && !visit[x][y]) {
                _q.push({x, y});
                visit[x][y] = 1;
            }
        }
    }
    cout << "NO";

    return 0;
}