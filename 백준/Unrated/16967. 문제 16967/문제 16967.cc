#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int a[1000][1000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int h, w, x, y;
    cin >> h >> w >> x >> y;
    for(int i = 0; i < h+x; i++) {
        for(int j = 0; j < w+y; j++) {
            int input;
            cin >> input;
            if(i < x || j < y) {
                a[i][j] = input;
            }
            else if(i >= h || j >= w) {
                continue;
            }
            else {
                a[i][j] = input - a[i-x][j-y];
            }
        }
    }

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}