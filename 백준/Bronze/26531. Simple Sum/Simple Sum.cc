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

    string a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    cout << (a[0] -'0' + c[0] - '0' == e[0] - '0' ? "YES" : "NO");

    return 0;
}