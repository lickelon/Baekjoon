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

    while(true) {
        int x, y;
        cin >> x >> y;
        if(x == 0 && y == 0) break;
        if(x+y == 13) {
            cout << "Never speak again.\n";
            continue;
        }
        if(x == y) {
            cout << "Undecided.\n";
        }
        else if(x > y) {
            cout << "To the convention.\n";
        }
        else {
            cout << "Left beehind.\n";
        }
    }

    return 0;
}