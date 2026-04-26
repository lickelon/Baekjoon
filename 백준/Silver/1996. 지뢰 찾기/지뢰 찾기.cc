#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int board[1002][1002];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for(int j = 1; j <= n; j++) {
            if(s[j-1] == '.') board[i][j] = 0;
            else board[i][j] = s[j-1]-'0';
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(board[i][j] != 0) {
                cout << "*";
            }
            else {
                int sum = 0;
                for(int di = -1; di <= 1; di++) {
                    for(int dj = -1; dj <= 1; dj++) {
                        sum += board[i+di][j+dj];
                    }
                }
                cout << char(sum >= 10 ? 'M' : '0' + sum);
            }
        }
        cout << "\n";
    }

    return 0;
}