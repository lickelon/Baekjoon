#include <bits/stdc++.h>

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

    ll a, b, pa, pb, n;

    cin >> n;

    cin >> a >> pa >> b >> pb;

    ll maxx = 0, maxy = 0;
    for(ll x = 0; x * pa <= n; x++) {
        ll y = (n - (pa * x)) / pb;
        if(maxx * a + maxy * b < x * a + y * b) {
            maxx = x;
            maxy = y;
        }
    }

    cout << maxx << " " << maxy;

    return 0;
}