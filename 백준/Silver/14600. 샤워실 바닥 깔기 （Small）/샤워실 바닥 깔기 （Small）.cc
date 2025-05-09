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

    int k;
    cin >> k;
    int x, y;
    cin >> x >> y;

    if(k == 1) {
        int board[2][2] = {{1,1},{1,1}};
        board[y-1][x-1] = -1;
        cout << board[1][0] << " " << board[1][1] << "\n" << board[0][0] << " " << board[0][1];
        return 0;
    }
    else {
        int board[4][4] = {{1,1,2,2},{1,5,5,2},{3,5,5,4},{3,3,4,4}};
        int spot = ((y-1)/2)*2 + ((x-1)/2) + 1;
        switch(spot) {
        case 1:
            board[0][0] = board[0][1] = board[1][0] = board[1][1] = 1;
            break;
        case 2:
            board[0][2] = board[0][3] = board[1][2] = board[1][3] = 2;
            break;
        case 3:
            board[2][0] = board[2][1] = board[3][0] = board[3][1] = 3;
            break;
        case 4:
            board[2][2] = board[2][3] = board[3][2] = board[3][3] = 4;
            break;
        }
        board[y-1][x-1] = -1;
        for(int i = 3; i >= 0; i--) {
            for(int j = 0; j < 4; j++) {
                cout << board[i][j] << " ";
            }
            cout << "\n";
        }
        return 0;
    }

    return 0;
}