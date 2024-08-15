#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<ll> dijkstra(ll start, vector<vector<pll>> &edge) {
    vector<ll> d(edge.size(), INF);
    priority_queue<pair<ll, ll>> _pq;
    _pq.push({0, start});
    while(!_pq.empty()) {
        ll dist = -_pq.top().first;
        ll curr = _pq.top().second;
        _pq.pop();
        if(d[curr] < dist) continue;
        for(auto u : edge[curr]) {
            ll next = u.first;
            ll nextDist = u.second;
            if(nextDist + dist < d[next]) {
                d[next] = nextDist + dist;
                _pq.push({-d[next], next});
            }
        }
    }
    return d;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<vector<pll>> edge(n+1);    
    for(int i = 0; i < m; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        edge[a].emplace_back(b, c);
        edge[b].emplace_back(a, c);
    }

    vector<ll> dist = dijkstra(1, edge);
    cout << dist[n];

    return 0;
}