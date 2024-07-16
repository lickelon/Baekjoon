#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int dx[] = {0,0, -1, 1, 0, 0};
int dy[] = {0, 0, 0, 0, -1, 1};
int dz[] = {-1, 1, 0, 0, 0, 0};

struct node {
    bool is_cut[6]; //UDLRBF
};

node frame[400][400][2];
bool visited[400][400][2];

//xy(UD), yz(LR), zx(BF)
void cut(int face, int x, int y, int z) {
    switch(face) {
    case 1:
        if(z%2) 
            frame[x][y][z].is_cut[0] = true;
        else 
            frame[x][y][z].is_cut[1] = true;
        break;
    case 2:
        if(x%2) 
            frame[x][y][z].is_cut[2] = true;
        else 
            frame[x][y][z].is_cut[3] = true;
        break;
    case 3:
        if(y%2) 
            frame[x][y][z].is_cut[4] = true;
        else 
            frame[x][y][z].is_cut[5] = true;
        break;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int r, c;
    cin >> r >> c;
    for(int i = 0; i < c*2; i++) {
        for(int j = 0; j < r*2; j++) {
            for(int k = 0; k < 2; k++) {
                if(k == 0) frame[i][j][k].is_cut[0] = true;
                if(k == 1) frame[i][j][k].is_cut[1] = true;
                if(i == 0) frame[i][j][k].is_cut[2] = true;
                if(i == c*2-1) frame[i][j][k].is_cut[3] = true;
                if(j == 0) frame[i][j][k].is_cut[4] = true;
                if(j == r*2-1) frame[i][j][k].is_cut[5] = true;
            }
        }
    }
    //xy(UD), yz(LR), zx(BF)
    //H : xy, zx | I : xy, yz | O : yz, zx
    for(int i = 0; i < r; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < c; j++) {
            for(int part = 0; part < 8; part++) {
                int x = part & 1;
                int y = (part >> 1) & 1;
                int z = (part >> 2) & 1;
                switch(s[j]) {
                case 'H':
                    cut(1, j*2+x, i*2+y, z);
                    cut(3, j*2+x, i*2+y, z);
                    break;
                case 'I':
                    cut(1, j*2+x, i*2+y, z);
                    cut(2, j*2+x, i*2+y, z);
                    break;
                case 'O':
                    cut(2, j*2+x, i*2+y, z);
                    cut(3, j*2+x, i*2+y, z);
                    break;
                }
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < c*2; i++) {
        for(int j = 0; j < r*2; j++) {
            for(int k = 0; k < 2; k++) {
                if(visited[i][j][k]) continue;
                ans++;
                queue<tuple<int,int,int>> _q;
                _q.push({i,j,k});
                visited[i][j][k] = true;
                while(!_q.empty()) {
                    auto curr = _q.front(); _q.pop();
                    int x, y, z;
                    x = get<0>(curr);
                    y = get<1>(curr);
                    z = get<2>(curr);
                    auto& _n = frame[x][y][z];
                    for(int next = 0; next < 6; next++) {
                        if(!_n.is_cut[next]) {
                            int nx = x + dx[next];
                            int ny = y + dy[next];
                            int nz = z + dz[next];
                            if(!visited[nx][ny][nz]) {
                                _q.push({nx,ny,nz});
                                visited[nx][ny][nz] = true;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << ans;

    return 0;
}