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

    int f,s,g,u,d;
    cin >> f >> s >> g >> u >> d;
    queue<pii> _q;
    _q.push({s,0});
    vector<int> visit(f+1);
    visit[s] = 1;
    while(!_q.empty()) {
        pii cur = _q.front(); _q.pop();
        if(cur.first == g) {
            cout << cur.second;
            return 0;
        }
        if(cur.first + u <= f && !visit[cur.first + u]) {
            _q.push({cur.first+u, cur.second+1});
            visit[cur.first + u] = true;
        }
        if(cur.first - d >= 1 && !visit[cur.first - d]) {
            _q.push({cur.first-d, cur.second+1});
            visit[cur.first - d] = true;

        }
    }
    cout << "use the stairs";

    return 0;
}