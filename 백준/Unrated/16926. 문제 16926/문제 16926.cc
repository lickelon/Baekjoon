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

    int n, m, r;
    cin >> n >> m >> r;

    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    auto rotate = [&]() -> vector<vector<int>> {
        vector<vector<int>> temp(n, vector<int>(m));
        vector<vector<bool>> visit(n, vector<bool>(m, false));
        auto check = [&visit, n, m](int x, int y) -> bool {
            if(x < 0 || x >= n) return false;
            if(y < 0 || y >= m) return false;
            if(visit[x][y]) return false;
            return true;
        };
        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, 1, 0, -1};
        for(int depth = 0; depth < min(n, m) / 2; depth++) {
            int dir = 0;
            int x = depth + dx[dir];
            int y = depth + dy[dir];
            while(!visit[x][y]) {
                visit[x][y] = true;
                temp[x][y] = arr[x-dx[dir]][y-dy[dir]];
                if(!check(x+dx[dir],y+dy[dir])) {
                    dir = (dir + 1)%4;
                }
                x += dx[dir];
                y += dy[dir];
            }
        }
        return temp;
    };

    for(int i = 0; i < r; i++) {
        arr = rotate();
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}