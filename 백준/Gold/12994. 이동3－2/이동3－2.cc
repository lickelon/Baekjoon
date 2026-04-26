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

    int x, y;
    cin >> x >> y;

    int step = 1;
    while(x != 0 || y != 0) {
        bool flag = false;
        if(x != 0 && (x + step) % (step * 3) == 0) {
            x += step;
            flag = true;
        }
        else if(x != 0 && (x - step) % (step * 3) == 0) {
            x -= step;
            flag = true;
        }
        if(flag) {
            step *= 3;
            continue;
        }
        if(y != 0 && (y + step) % (step * 3) == 0) {
            y += step;
            flag = true;
        }
        else if(y != 0 && (y - step) % (step * 3) == 0) {
            y -= step;
            flag = true;
        }
        if(flag) {
            step *= 3;
            continue;
        }
        if(!flag) {
            break;
        }
    }

    if(x == 0 && y == 0) cout << 1;
    else cout << 0;

    return 0;
}