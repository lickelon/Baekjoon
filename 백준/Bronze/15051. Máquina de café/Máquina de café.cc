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

    int a, b, c;
    cin >> a >> b >> c;
    int ans = INF;
    ans = min(ans, b + c*2);
    ans = min(ans, a + c);
    ans = min(ans, a*2 + b);
    cout << ans * 2;

    return 0;
}