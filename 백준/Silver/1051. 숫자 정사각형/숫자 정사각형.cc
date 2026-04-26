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
    int board[50][50];
    string input;
    for(int i = 0; i < n; i++) {
        cin >> input;
        for(int j = 0; j < m; j++) {
            board[i][j] = input[j];
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int l = 0;
            while(i + l < n && j + l < m) {
                if(board[i][j] == board[i+l][j]
                && board[i][j] == board[i][j+l]
                && board[i][j] == board[i+l][j+l]) {
                    ans = max(ans, (l+1)*(l+1));
                }
                l++;
            }
        }
    }
    cout << ans;

    return 0;
}