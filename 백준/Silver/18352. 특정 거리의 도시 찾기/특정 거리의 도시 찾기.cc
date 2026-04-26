#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> e[300001];
bool visited[300001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, k, x;
    cin >> n >> m >> k >> x;
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        e[a].emplace_back(b);
    }

    queue<pii> _q;
    _q.push({x, 0});
    visited[x] = true;
    vector<int> ans;
    while(!_q.empty()) {
        pii temp = _q.front(); _q.pop();
        if(temp.second == k) {
            ans.emplace_back(temp.first);
            continue;
        }
        for(auto u : e[temp.first]) {
            if(visited[u]) continue;
            _q.push({u, temp.second+1});
            visited[u] = true;
        }
    }

    if(ans.empty()) {
        cout << "-1\n";
        return 0;
    }
    sort(all(ans));
    for(auto u : ans) {
        cout << u << " ";
    }

    return 0;
}