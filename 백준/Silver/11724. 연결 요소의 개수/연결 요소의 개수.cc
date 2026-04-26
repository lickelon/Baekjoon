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

    int n, m;
    cin >> n >> m;
    vector<bool> visit(n+1);
    vector<vector<int>> e(n+1);

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        e[u].push_back(v);
        e[v].push_back(u);
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(visit[i]) continue;
        ans++;
        queue<int> _q;
        _q.push(i);
        visit[i] = true;
        while(!_q.empty()) {
            int curr = _q.front(); _q.pop();
            for(auto u : e[curr]) {
                if(visit[u]) continue;
                _q.push(u);
                visit[u] = true;
            }
        }
    }
    cout << ans;

    return 0;
}