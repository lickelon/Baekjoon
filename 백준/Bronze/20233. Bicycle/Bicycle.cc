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

    int a, x, b, y, T;
    cin >> a >> x >> b >> y >> T;
    cout << 21 * max(0,(T - 30)) * x + a << " " << 21 * max(0,(T - 45)) * y + b;

    return 0;
}