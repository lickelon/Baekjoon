#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edge(n+1), rev(n+1);
        for(int i = 0; i < m; i++) {
            int a, b;
            cin >> a >> b;
            edge[a].emplace_back(b);
            rev[b].emplace_back(a);
        }

        vector<int> dist(n+1, INF);
        queue<int> _q;
        _q.push(1);
        dist[1] = 1;
        while(!_q.empty()) {
            int curr = _q.front(); _q.pop();
            for(auto v : edge[curr]) {
                if(dist[v] > dist[curr]+1) {
                    _q.push(v);
                    dist[v] = dist[curr]+1;
                }
            }
        }

        set<int> ans{n};
        _q.push(n);
        while(!_q.empty()) {
            int curr = _q.front(); _q.pop();
            for(auto v : rev[curr]) {
                if(dist[v] == dist[curr]-1) {
                    if(ans.find(v) == ans.end()) {
                        _q.push(v);
                        ans.insert(v);
                    }
                }
            }
        }

        for(auto e : ans) cout << e << " ";
        cout << "\n";
    }

    return 0;
}