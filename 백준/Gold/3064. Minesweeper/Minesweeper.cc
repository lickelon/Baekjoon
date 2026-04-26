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
        int n;
        cin >> n;
        vector<vector<int>> board(n, vector<int>(n));
        for(int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for(int j = 0; j < n; j++) {
                if(s[j] == '#') {
                    board[i][j] = -1;
                }
                else {
                    board[i][j] = s[j] - '0';
                }
            }
        }
        int ans = 0;
        for(int i = 1; i < n-1; i++) {
            for(int j = 1; j < n-1; j++) {
                int m = 3;
                for(int dx = -1; dx <= 1; dx++) {
                    for(int dy = -1; dy <= 1; dy++) {
                        if(dx == 0 && dy == 0) continue;
                        if(board[i+dx][j+dy] >= 0) {
                            m = min(m, board[i+dx][j+dy]);
                        }
                    }
                }
                if(m > 0) {
                    ans++;
                    for(int dx = -1; dx <= 1; dx++) {
                        for(int dy = -1; dy <= 1; dy++) {
                            if(dx == 0 && dy == 0) continue;
                            if(board[i+dx][j+dy] >= 0) {
                                board[i+dx][j+dy]--;
                            }
                        }
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}