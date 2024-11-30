#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

class Flow {
    vector<vector<int>> edge;
    vector<vector<int>> f, c;
    int n;
public:
    Flow(int n) {
        this->n = n;
        edge.resize(n);
        f = vector<vector<int>>(n, vector<int>(n));
        c = vector<vector<int>>(n, vector<int>(n));
    }
    int flow(int start, int end) {
        init();
        int ans = 0;
        while(true) {
            //BFS
            vector<int> parent(n, -1);
            queue<int> _q;
            parent[start] = start;
            _q.push(start);
            while(!_q.empty() && parent[end] == -1) {
                int curr = _q.front(); _q.pop();
                for(auto u : edge[curr]) {
                    if(c[curr][u] - f[curr][u] > 0 && parent[u] == -1) {
                        _q.push(u);
                        parent[u] = curr;
                        if(u == end) break;
                    }
                }
            }
            if(parent[end] == -1) break;
            //check amount
            int amount = INF;
            int curr = end;
            while(curr != start) {
                int before = parent[curr];
                amount = min(amount, c[before][curr] - f[before][curr]);
                curr = before;
            }
            //set
            curr = end;
            while(curr != start) {
                int before = parent[curr];
                f[before][curr] += amount;
                f[curr][before] -= amount;
                curr = before;
            }
            ans += amount;
        }
        return ans;
    }
    void add_edge(int x, int y, int c, bool b = 0) {
        edge[x].push_back(y);
        edge[y].push_back(x);
        this->c[x][y] = c;
        if(b) this->c[x][y] = c; //양방향 그래프
    }
private:
    void init() {
        for(auto &u : f) {
            for(auto &v : u) {
                v = 0;
            }
        }
    }
};

int cti(int n, int m, int x, int y) {
    return x*m+y+1;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    for(int tc = 1; tc <= T; tc++) {
        int n, d;
        cin >> n >> d;
        vector<string> inputb(n);
        for(auto &e : inputb) cin >> e;
        int m = inputb[0].length();
        vector<vector<int>> board(n+2, vector<int>(m+2, 0));
        for(int i = 0; i < n+2; i++) {
            board[i][0] = -1;
            board[i][m+1] = -1;
        }
        for(int i = 0; i < m+2; i++) {
            board[0][i] = -1;
            board[n+1][i] = -1;
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                board[i+1][j+1] = inputb[i][j] - '0';
            }
        }
        vector<string> inputl(n);
        for(auto &e : inputl) cin >> e;

        int s = n*m*2+2;
        Flow f(s);
        int lcnt = 0;
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                int st = cti(n, m, i-1, j-1);
                int ed = st+n*m;
                if(board[i][j] <= 0) continue;
                if(inputl[i-1][j-1] == 'L') {
                    f.add_edge(0, st, 1);
                    lcnt++;
                }
                f.add_edge(st, ed, board[i][j]);

                for(int dx = -d; dx <= d; dx++) {
                    for(int dy = -d; dy <= d; dy++) {
                        int D = abs(dx) + abs(dy);
                        if(D > d) continue;
                        if(i + dx < 0 || i + dx > n+1) continue;
                        if(j + dy < 0 || j + dy > m+1) continue;
                        if(board[i+dx][j+dy] == 0) continue;
                        if(board[i+dx][j+dy] == -1) f.add_edge(ed, s-1, 1e9);
                        else f.add_edge(ed, cti(n, m, i-1+dx, j-1+dy), 1e9);
                    }
                }
            }
        }
        cout << "Case #" << tc << ": ";
        int ans = lcnt - f.flow(0, s-1);
        if(ans == 0) cout << "no";
        else cout << ans;
        if(ans <= 1) cout << " lizard was left behind.\n";
        else cout << " lizards were left behind.\n";
    }

    return 0;
}