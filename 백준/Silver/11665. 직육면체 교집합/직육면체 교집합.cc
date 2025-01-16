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
    pii x, y, z;
    x = y = z = {0, INF};
    for(int i = 0; i < n; i++) {
        int x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        x.first = max(x.first, x1);
        x.second = min(x.second, x2);
        y.first = max(y.first, y1);
        y.second = min(y.second, y2);
        z.first = max(z.first, z1);
        z.second = min(z.second, z2);
    }
    cout << max(0, x.second-x.first) * max(0, y.second-y.first) * max(0, z.second-z.first);

    return 0;
}