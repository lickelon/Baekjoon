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

    int board[102][102] = {};

    int a, b;
    cin >> a >> b;

    for(int i = 0; i <= a+1; i++) {
        board[i][0] = -1;
        board[i][b+1] = -1;
    }

    for(int i = 0; i <= b+1; i++) {
        board[0][i] = -1;
        board[a+1][i] = -1;
    }

    int n, m;
    cin >> n >> m;
    char dirst[] = "NWSE";
    pii dirn[] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
    vector<int> rdir(n+1);
    vector<pii> rxy(n+1);
    for(int i = 1; i <= n; i++) {
        int x, y;
        string d;
        cin >> x >> y >> d;
        for(int j = 0; j < 4; j++) {
            if(d[0] == dirst[j]) {
                rdir[i] = j;
            }
        }
        board[x][y] = i;
        rxy[i] = {x,y};
    }

    for(int i = 0; i < m; i++) {
        int num;
        string d;
        int c;
        cin >> num >> d >> c;
        for(int i = 0; i < c; i++) {
            if(d[0] == 'L') {
                rdir[num] += 1;
                rdir[num] %= 4;
            }
            if(d[0] == 'R') {
                rdir[num] += 3;
                rdir[num] %= 4;
            }
            if(d[0] == 'F') {
                pii dir = dirn[rdir[num]];
                pii loc = rxy[num];
                if(board[loc.first+dir.first][loc.second+dir.second] == 0) {
                    board[loc.first][loc.second] = 0;
                    board[loc.first+dir.first][loc.second+dir.second] = num;
                    rxy[num] = {loc.first+dir.first,loc.second+dir.second};
                }
                else if(board[loc.first+dir.first][loc.second+dir.second] == -1) {
                    cout << "Robot " << num << " crashes into the wall";
                    return 0;
                }
                else {
                    cout << "Robot " << num << " crashes into robot " << board[loc.first+dir.first][loc.second+dir.second];
                    return 0;
                }
            }
        }
    }

    cout << "OK";

    return 0;
}