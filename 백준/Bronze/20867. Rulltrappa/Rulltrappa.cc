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

    double m, s, g;
    cin >> m >> s >> g;
    double a, b;
    cin >> a >> b;
    double l, r;
    cin >> l >> r;
    if(1.0 / a * l + m / g < 1.0 / b * r + m / s) {
        cout << "friskus";
    }
    else cout << "latmask";

    return 0;
}