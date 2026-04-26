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
    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<pii>> edge(n+1);
        for(int i = 0; i < m; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            edge[a].emplace_back(make_pair(b, c));
            edge[b].emplace_back(make_pair(a, c));
        }

        int k;
        cin >> k;
        vector<int> arr(k);
        for(auto &u : arr) cin >> u;
        vector<vector<int>> dist(k, vector<int>(n+1, INF));

        auto dijkstra = [&](int st, vector<int> &dist) {
            priority_queue<pii> _pq;
            _pq.push({0, st});
            dist[st] = 0;
            while(!_pq.empty()) {
                pii curr = _pq.top(); _pq.pop();
                if(-curr.first > dist[curr.second]) continue;
                for(auto u : edge[curr.second]) {
                    int b = u.first, c = u.second;
                    if(dist[curr.second] + c < dist[b]) {
                        dist[b] = dist[curr.second]+c;
                        _pq.push({-dist[b], b});
                    }
                }
            }
        };

        for(int i = 0; i < k; i++) {
            dijkstra(arr[i], dist[i]);
        }
        int ans = -1, sum = INF;
        for(int i = 1; i < n+1; i++) {
            int temp = 0;
            for(int j = 0; j < k; j++) {
                temp += dist[j][i];
            }
            if(temp < sum) {
                sum = temp;
                ans = i;
            }
        }
        cout << ans << "\n";
    }
    
    return 0;
}
