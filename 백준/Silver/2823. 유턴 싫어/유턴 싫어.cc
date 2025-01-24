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

    int r, c;
    cin >> r >> c;
    vector<vector<int>> board(r+2, vector<int>(c+2, 0));
    for(int i = 1; i <= r; i++) {
        string s;
        cin >> s;
        for(int j = 1; j <= c; j++) {
            if(s[j-1] == '.') board[i][j] = 1;
        }
    }

    int ans = 0;
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            if(board[i][j] == 0) continue;
            int cnt = 0;
            int dx[] = {1, 0, -1, 0};
            int dy[] = {0, 1, 0, -1};
            for(int d = 0; d < 4; d++) {
                cnt += board[i+dx[d]][j+dy[d]];
            }
            if(cnt == 1) ans = 1;
        }
    }
    cout << ans;

    return 0;
}