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

    int n, p;
    cin >> n >> p;
    int ans = p;
    if(n >= 5) ans = min(ans, p - 500);
    if(n >= 10) ans = min(ans, p * 9 / 10);
    if(n >= 15) ans = min(ans, p - 2000);
    if(n >= 20) ans = min(ans, p * 3 / 4);
    if(ans < 0) ans = 0;
    cout << ans;

    return 0;
}