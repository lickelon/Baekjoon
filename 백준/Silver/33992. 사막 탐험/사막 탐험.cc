#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ld dist(ld ax, ld ay, ld bx, ld by) {
    return sqrtl((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cout.precision(10);
    cout << fixed;

    ld ax, ay, bx, by, px, py, r;
    cin >> ax >> ay >> bx >> by >> px >> py >> r;
    
    ld ans = dist(ax, ay, bx, by);
    ans = min(ans, max(ld(0), dist(ax,ay,px,py)-r) + max(ld(0), dist(bx,by,px,py)-r));
    cout << ans;

    return 0;
}