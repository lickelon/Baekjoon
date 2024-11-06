#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int flow(vector<vector<pii>> &edge, int start, int end) {
    int n = edge.size();
    vector<vector<int>> c(n, vector<int>(n));
    vector<vector<int>> f(n, vector<int>(n));
    //init
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < edge[i].size(); j++) {
            int next = edge[i][j].first;
            c[i][next] = edge[i][j].second;
        }
    }
    int ans = 0;
    while(true) {
        //BFS
        vector<int> parent(n, -1);
        queue<int> _q;
        parent[start] = start;
        _q.push(start);
        while(!_q.empty() && parent[end] == -1) {
            int curr = _q.front(); _q.pop();
            for(auto &[u, _] : edge[curr]) {
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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    int S = n + m + 3;
    vector<vector<pii>> edge(S);
    auto add_edge = [&](int x, int y, int c) {
        edge[x].emplace_back(y, c);
        edge[y].emplace_back(x, 0);
    };
    add_edge(0, 1, k);
    for(int i = 1; i <= n; i++) {
        add_edge(0, i+1, 1);
        add_edge(1, i+1, k);
        int jobs;
        cin >> jobs;
        for(int j = 0; j < jobs; j++) {
            int input;
            cin >> input;
            add_edge(i+1, input + (n+1), 1);
        }
    }
    for(int i = 1; i <= m; i++) {
        add_edge(i + (n+1), S-1, 1);
    }
    cout << flow(edge, 0, S-1);

    return 0;
}