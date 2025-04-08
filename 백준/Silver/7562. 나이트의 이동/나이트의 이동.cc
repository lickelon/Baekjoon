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

    int T;
    cin >> T;
    while(T--) {
        int l;
        cin >> l;
        int board[300][300] = {};
        pii st, ed;
        cin >> st.first >> st.second;
        cin >> ed.first >> ed.second;

        queue<array<int, 3>> _q;
        _q.push({st.first, st.second, 0});
        board[st.first][st.second] = 1;
        int ans = 0;
        int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
        int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};
        while(!_q.empty()) {
            auto [cx, cy, cnt] = _q.front(); _q.pop();
            if(cx == ed.first && cy == ed.second) {
                ans = cnt;
                break;
            }
            for(int d = 0; d < 8; d++) {
                int x = cx + dx[d];
                int y = cy + dy[d];
                if(x < 0 || x >= l) continue;
                if(y < 0 || y >= l) continue;
                if(board[x][y]) continue;

                _q.push({x, y, cnt+1});
                board[x][y] = 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}