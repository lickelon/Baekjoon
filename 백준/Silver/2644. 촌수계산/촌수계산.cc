#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

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

    int n;
    cin >> n;
    int s, e;
    cin >> s >> e;
    int m;
    cin >> m;

    vector<vector<int>> arr(n+1);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr[a].emplace_back(b);
        arr[b].emplace_back(a);
    }

    vector<int> visit(n+1);
    queue<int> _q;
    _q.push(s);
    visit[s] = 1;
    while(!_q.empty()) {
        int curr = _q.front(); _q.pop();
        for(auto v : arr[curr]) {
            if(visit[v]) continue;
            _q.push(v);
            visit[v] = visit[curr] + 1;
        }
    }

    cout << visit[e]-1;

    return 0;
}