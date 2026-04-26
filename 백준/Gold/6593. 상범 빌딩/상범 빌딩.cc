#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct coord {
    int x;
    int y;
    int z;
    bool operator==(coord &a) {
        return (x==a.x && y==a.y && z==a.z);
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while(true) {
        int l, r, c;
        cin >> l >> r >> c;
        if((l | r | c) == 0) break;
        int map[30][30][30];
        coord S, E;
        for(int i = 0; i < l; i++) {
            for(int j = 0; j < r; j++) {
                string s;
                cin >> s;
                for(int k = 0; k < c; k++) {
                    if(s[k] == '#') map[i][j][k] = 0;
                    else map[i][j][k] = 1;

                    if(s[k] == 'S') S = {i,j,k};
                    if(s[k] == 'E') E = {i,j,k};
                }
            }
        }
        queue<pair<coord, int>> _q;
        _q.push({S, 0});
        auto check = [&](coord t)->bool {
            if(t.x < 0 || t.x >= l) return false;
            if(t.y < 0 || t.y >= r) return false;
            if(t.z < 0 || t.z >= c) return false;
            return map[t.x][t.y][t.z];
        };
        while(!_q.empty()) {
            auto temp = _q.front(); _q.pop();
            if(temp.first == E) {
                cout << "Escaped in " << temp.second << " minute(s).\n";
                _q.push({E,-1});
                break;
            }
            int dx[] = {-1,1,0,0,0,0};
            int dy[] = {0,0,-1,1,0,0};
            int dz[] = {0,0,0,0,-1,1};
            for(int i = 0; i < 6; i++) {
                coord next;
                next.x = temp.first.x + dx[i];
                next.y = temp.first.y + dy[i];
                next.z = temp.first.z + dz[i];
                if(check(next)) {
                    _q.push({next, temp.second+1});
                    map[next.x][next.y][next.z] = 0;
                }
            }
        }
        if(_q.empty()) {
            cout << "Trapped!\n";
        }
    }

    return 0;
}