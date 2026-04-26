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
    int board[101][101];
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            board[i][j] = s[j] - '0';
        }
    }

    int ans = 0;
    for(int i = n - 1; i >= 0; i--) {
        for(int j = m - 1; j >= 0; j--) {
            if(board[i][j]) {
                for(int x = 0; x <= i; x++) {
                    for(int y = 0; y <= j; y++) {
                        board[x][y] = !board[x][y];
                    }
                }
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}