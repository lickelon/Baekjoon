#include <bits/stdc++.h>

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

    int n, m;
    cin >> n >> m;

    vector<vector<int>> edge(n+1, vector<int>());
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        edge[a].emplace_back(b);
        edge[b].emplace_back(a);
    }

    vector<int> visit(n+1);

    queue<int> _q;
    _q.push(1);
    visit[1] = true;

    while(!_q.empty()) {
        int curr = _q.front(); _q.pop();
        for(auto e : edge[curr]) {
            if(e < curr) continue;
            if(visit[e]) continue;
            visit[e] = true;
            _q.push(e);
        }
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(visit[i]) cnt++;
    }
    cout << (cnt == n ? "YES" : "NO");

    return 0;
}