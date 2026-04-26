#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 987654321

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<pii>> edge(n+1);
    vector<int> dist(n+1, INF);
    for(int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edge[a].emplace_back(make_pair(b, c));
    }
    int s, e;
    cin >> s >> e;
    dist[s] = 0;

    priority_queue<pii> _pq;
    _pq.push({s, 0});
    while(!_pq.empty()) {
        pii curr = _pq.top(); _pq.pop();
        if(curr.second > dist[curr.first]) continue;
        for(auto u : edge[curr.first]) {
            int b = u.first, c = u.second;
            if(dist[curr.first] + c < dist[b]) {
                dist[b] = dist[curr.first]+c;
                _pq.push({b, dist[b]});
            }
        }
    }
    cout << dist[e];
    return 0;
}
