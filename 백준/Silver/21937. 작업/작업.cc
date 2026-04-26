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
    vector<int> e[100001];
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        e[b].emplace_back(a);
    }

    int x;
    cin >> x;

    int ans = 0;
    vector<int> visit(n+1);
    queue<int> _q;
    _q.push(x);
    visit[x] = true;
    while(!_q.empty()) {
        for(auto u : e[_q.front()]) {
            if(visit[u]) continue;
            visit[u] = true;
            _q.push(u);
            ans += 1;
        }
        _q.pop();
    }
    cout << ans;

    return 0;
}