#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 1e18

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

    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    int m;
    cin >> m;

    vector<vector<pll>> edge(n+1);
    for(int i = 0; i < m; i++) {
        ll d, e, l;
        cin >> d >> e >> l;
        edge[d].push_back({e, l});
        edge[e].push_back({d, l});
    }

    vector<ll> da, db, dc;
    da = dijkstra(a, edge);
    db = dijkstra(b, edge);
    dc = dijkstra(c, edge);

    ll M = 0, mnum;
    for(int i = 1; i <= n; i++) {
        ll mm = min({da[i], db[i], dc[i]});
        if(mm > M) {
            M = mm;
            mnum = i;
        }
    }
    cout << mnum;

    return 0;
}