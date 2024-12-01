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
        if(b) this->c[y][x] = c; //양방향 그래프
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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    Flow f(n+1);
    for(int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        f.add_edge(a, b, c, true);
    }
    int s, t;
    cin >> s >> t;
    cout << f.flow(s, t);

    return 0;
}