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
    int a, b;
    a = 100 - x;
    b = 100 - y;
    int c, d;
    c = 100 - a - b;
    d = a * b;
    cout << a << " " << b << " " << c << " " << d << " " << d/100 << " " << d%100 << '\n';
    cout << c + d/100 << " " << d % 100;

    return 0;
}