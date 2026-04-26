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

    int n;
    cin >> n;
    int arrX[1000001] = {};
    int arrY[1000001] = {};
    for(int i = 0; i < n; i++) {
        int x1, x2, x3, y1, y2, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        arrX[min({x1,x2,x3})+1] += 1;
        arrX[max({x1,x2,x3})] -= 1;
        arrY[min({y1,y2,y3})+1] += 1;
        arrY[max({y1,y2,y3})] -= 1;
    }

    for(int i = 1; i < 1000001; i++) {
        arrX[i] += arrX[i-1];
        arrY[i] += arrY[i-1];
    }

    int m;
    cin >> m;
    while(m--) {
        string a, b;
        int c;
        cin >> a >> b >> c;
        if(a[0] == 'x') {
            cout << arrX[c] << "\n";
        }
        else {
            cout << arrY[c] << "\n";
        }
    }

    return 0;
}