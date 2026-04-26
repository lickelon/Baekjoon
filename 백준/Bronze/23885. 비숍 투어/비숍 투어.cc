#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, m;
    cin >> n >> m;

    ll ax, ay;
    cin >> ax >> ay;

    ll bx, by;
    cin >> bx >> by;
    if ((n == 1 || m == 1) && !(ax == bx && ay == by)) {
        cout << "NO";
        return 0;
    }
    if ((ax + ay) % 2 == (bx + by) % 2) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}