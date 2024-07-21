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
    for(int t = 1; t <= T; t++) {
        int r, c;
        cin >> r >> c;
        vector<string> board(r);
        for(auto &u : board) cin >> u;

        vector<int> check(r);
        for(int i = 0; i < r; i++) {
            char before = '?';
            for(int j = 0; j < c; j++) {
                if(board[i][j] == '?') {
                    if(before != '?') board[i][j] = before;
                    else continue;
                }
                else if(before == '?') {
                    for(int k = 0; k < j; k++) {
                        board[i][k] = board[i][j];
                    }
                    before = board[i][j];
                }
                else {
                    before = board[i][j];
                }
            }
            if(before == '?') {
                check[i] = 1;
            }
        }

        int before = -1;
        for(int i = 0; i < r; i++) {
            if(check[i]) {
                if(before == -1) continue;
                else {
                    board[i] = board[before];
                }
            }
            else {
                if(before == -1) {
                    for(int k = 0; k < i; k++) {
                        board[k] = board[i];
                    }
                }
                before = i;

            }
        }

        cout << "Case #" << t << ":\n";
        for(int i = 0; i < r; i++) {
            cout << board[i] << "\n";
        }
    }

    return 0;
}