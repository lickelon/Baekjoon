#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<vector<int>> edge(n+1, vector<int>());
    for(int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        edge[a].emplace_back(b);
        edge[b].emplace_back(a);
    }

    vector<bool> visit(n+1, false);

    int ans = 0;
    queue<pii> _q;
    _q.push({1, 0});
    visit[1] = true;
    while(!_q.empty()) {
        pii cur = _q.front(); _q.pop();
        int cnt = 0;
        for(auto u : edge[cur.first]) {
            if(visit[u]) continue;
            _q.push({u, cur.second + 1});
            visit[u] = true;
            cnt++;
        }
        if(!cnt) {
            ans += cur.second;
        }
    }
    cout << (ans % 2 ? "Yes" : "No");
    return 0;
}