#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int board[1000][1000];
int _visit[1000][1000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    //RULD
    int dx[] = {0, -1, 0, 1};
    int dy[] = {1, 0, -1, 0};
    char dir[] = "RULD";

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            for(int d = 0; d < 4; d++) {
                if(dir[d] == s[j]) {
                    board[i][j] = d;
                }
            }
        }
    }

    int ans = 0;
    int num = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(_visit[i][j]) continue;
            int x = i, y = j;
            while(!_visit[x][y]) {
                _visit[x][y] = num;
                int d = board[x][y];
                x += dx[d];
                y += dy[d];
            }
            if(_visit[x][y] == num) {
                ans++;
            }
            num++;
        }
    }

    cout << ans;

    return 0;
}