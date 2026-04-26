#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

vector<pii> adj[5001];
vector<int> candH;
vector<int> candC;
vector<pii> matched;

int n, m;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

void dijkstra(int src)
{
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int a, b, c;

        cin >> a >> b >> c;
        adj[a].push_back({b,c});
        adj[b].push_back({a,c});
    }

    int h, c;

    cin>> h >> c;
    for(int i = 0; i < h; i++)
    {
        int input;
        cin >> input;
        candH.push_back(input);
    }
    for(int i = 0; i < c; i++)
    {
        int input;
        cin >> input;
        candC.push_back(input);
    }

    vector<int> dist(n+1, INF);
    priority_queue<pii> _pq;
    for(auto u : candC) {
        dist[u] = 0;
        _pq.push({0,u});
    }

    while(!_pq.empty())
    {
        int cost = -_pq.top().first;
        int curr = _pq.top().second;
        _pq.pop();

        if(dist[curr] < cost) continue;

        for(auto u : adj[curr])
        {
            int next = u.first;
            int d = u.second;
            if(dist[next] > d + cost)
            {
                dist[next] = d + cost;
                _pq.push({-(d + cost), next});
            }
        }
    }

    for(auto u : candH)
    {
        matched.push_back({dist[u], u});
    }

    sort(matched.begin(), matched.end());
    cout << matched[0].second;

    return 0;
}