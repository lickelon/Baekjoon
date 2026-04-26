#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b, c, d, e, ans;

    cin >> a >> b >> c >> d >> e;

    if(a < 0)
    {
        ans = (-a) * c + d + b * e;
    }
    else
    {
        ans = (b - a) * e;
    }
    cout << ans;
}