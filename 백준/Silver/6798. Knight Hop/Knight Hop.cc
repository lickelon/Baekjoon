#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

#define x first
#define y second

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    pii a, b;
    cin >> a.x >> a.y >> b.x >> b.y;

    queue<pii> _q;
    _q.emplace(a);

    int visit[9][9] = {};
    int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
    int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
    visit[a.x][a.y] = 1;
    while(!_q.empty()) {
        pii curr = _q.front(); _q.pop();
        for(int i = 0; i < 8; i++) {
            pii c = curr;
            c.x += dx[i];
            c.y += dy[i];
            if(c.x <= 0 || c.x > 8) continue;
            if(c.y <= 0 || c.y > 8) continue;
            if(visit[c.x][c.y]) continue;
            _q.emplace(c);
            visit[c.x][c.y] = visit[curr.x][curr.y] + 1;
        }
    }
    cout << visit[b.x][b.y]-1;

    return 0;
}