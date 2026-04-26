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

    ll x, y;
    cin >> x >> y;
    ld z = ld(y) / x * 100;
    ll zi = ll(z);
    ld zf = z - ll(z);
    if(zi >= 99) cout << "-1";
    else {
        cout << (int)ceil((100 * y - x * (zi + 1)) / (double)(zi - 99));
    }

    return 0;
}