#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    double a;
    cin >> a >> x >> y;

    double scale = a / sqrt(x * x + y * y);

    x *= scale;
    y *= scale;

    cout << x << " " << y;

    return 0;
}