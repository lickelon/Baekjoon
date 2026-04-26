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

    int x1,x2;
    cin >> x1 >> x2;
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int ans = 0;
    ans += (a / 3) * (x1*x1*x1 - x2*x2*x2);
    ans += ((b-d) / 2) * (x1*x1 - x2*x2);
    ans += (c-e) * (x1 - x2);
    cout << -ans;


    return 0;
}