#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> edge[101];
bool node[101];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        edge[a].emplace_back(b);
        edge[b].emplace_back(a);
    }

    queue<int> _q;
    _q.push(1);
    while(!_q.empty()) {
        int temp = _q.front(); _q.pop();
        node[temp] = true;
        for(auto u : edge[temp]) {
            if(node[u]) continue;
            _q.push(u);
        }
    }
    int ans = 0;
    for(auto u : node) {
        if(u) ans++;
    }
    cout << ans-1;
    return 0;
}