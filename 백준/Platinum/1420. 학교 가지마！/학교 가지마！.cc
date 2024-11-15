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
    map<pii, int> f, c;
    int n;
public:
    Flow(int n) {
        this->n = n;
        edge.resize(n);
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
                    if(c[{curr,u}] - f[{curr,u}] > 0 && parent[u] == -1) {
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
                amount = min(amount, c[{before,curr}] - f[{before,curr}]);
                curr = before;
            }
            //set
            curr = end;
            while(curr != start) {
                int before = parent[curr];
                f[{before,curr}] += amount;
                f[{curr,before}] -= amount;
                curr = before;
            }
            ans += amount;
        }
        return ans;
    }
    void add_edge(int x, int y, int c, bool b = 0) {
        edge[x].push_back(y);
        edge[y].push_back(x);
        this->c[{x,y}] = c;
        if(b) this->c[{y,x}] = c; //양방향 그래프
    }
private:
    void init() {
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> board(n+2, vector<int>(m+2, 0));
    pii kc, hc;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            if(s[j] == '#') continue;
            board[i+1][j+1] = 1;
            if(s[j] == 'K') {
                kc = {i+1, j+1};
            }
            if(s[j] == 'H') {
                hc = {i+1, j+1};
            }
        }
    }

    Flow f(n*m*2);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(board[i][j] != 1) continue;
            f.add_edge((i-1)*m+(j-1), (i-1)*m+(j-1) + n*m, 1);
            if(board[i-1][j]) f.add_edge((i-1)*m+(j-1) + n*m, (i-2)*m+(j-1), 1e9);
            if(board[i+1][j]) f.add_edge((i-1)*m+(j-1) + n*m, (i)*m+(j-1), 1e9);
            if(board[i][j-1]) f.add_edge((i-1)*m+(j-1) + n*m, (i-1)*m+(j-2), 1e9);
            if(board[i][j+1]) f.add_edge((i-1)*m+(j-1) + n*m, (i-1)*m+(j), 1e9);
        }
    }
    if(abs(kc.first - hc.first) + abs(kc.second - hc.second) == 1) {
        cout << -1;
        return 0;
    }
    cout << f.flow((kc.first-1)*m+(kc.second-1) + n*m, (hc.first-1)*m+(hc.second-1));
    return 0;
}