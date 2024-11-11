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

    int T;
    cin >> T;
    while(T--) {
        int c, d, v;
        cin >> c >> d >> v;
        int n = v + 2;
        Flow f(n);
        vector<pair<string, string>> arr(v);
        for(auto &u : arr) {
            cin >> u.first >> u.second;
        }
        for(int i = 0; i < v; i++) {
            if(arr[i].first[0] == 'C') f.add_edge(0, i+1, 1);
            else f.add_edge(i+1, n-1, 1);
            for(int j = 0;j < i; j++) {
                if(arr[i].first == arr[j].second ||
                   arr[i].second == arr[j].first) {
                    if(arr[i].first[0] == 'C') f.add_edge(i+1, j+1, 1);
                    else f.add_edge(j+1, i+1, 1);
                }
            }
        }
        cout << v - f.flow(0, n-1) << "\n";
    }

    return 0;
}