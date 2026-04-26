#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    a *= e;

    e -= c;
    if(e > 0)
        b += d * e;

    cout << (a < b ? a : b);
}