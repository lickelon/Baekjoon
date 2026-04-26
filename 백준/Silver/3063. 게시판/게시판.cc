#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

#define x first
#define y second

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        pii a, b, c, d;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y >> d.x >> d.y;
        if(d.x <= a.x || c.x >= b.x || d.y <= a.y || c.y >= b.y) {
            cout << (b.x - a.x) * (b.y - a.y) << "\n";
            continue;
        }
        pii e, f;
        f.x = min(b.x, d.x);
        e.x = max(a.x, c.x);
        f.y = min(b.y, d.y);
        e.y = max(a.y, c.y);
        // if(d.x > a.x) {
        //     f.x = min(b.x, d.x);
        //     e.x = max(a.x, c.x);
        // }
        // if(c.x < b.x) {
        //     f.x = min(b.x, d.x);
        //     e.x = c.x;
        // }
        // if(d.y > a.y) {
        //     f.y = d.y;
        //     e.y = max(a.y, c.y);
        // }
        // if(c.y < b.y) {
        //     f.y = min(b.y, d.y);
        //     e.y = c.y;
        // }
        cout << max(0, (b.x - a.x) * (b.y - a.y) - (f.x - e.x) * (f.y - e.y)) << "\n";
    }

    return 0;
}