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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    int S = n + m + 3;
    Flow f(S);
    f.add_edge(0, 1, k);
    for(int i = 1; i <= n; i++) {
        f.add_edge(0, i+1, 1);
        f.add_edge(1, i+1, k);
        int jobs;
        cin >> jobs;
        for(int j = 0; j < jobs; j++) {
            int input;
            cin >> input;
            f.add_edge(i+1, input + (n+1), 1);
        }
    }
    for(int i = 1; i <= m; i++) {
        f.add_edge(i + (n+1), S-1, 1);
    }
    cout << f.flow(0, S-1);

    return 0;
}