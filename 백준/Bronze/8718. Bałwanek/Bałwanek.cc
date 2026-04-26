#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll x, k, ans = 0;

    cin >> x >> k;

    x *= 1000;
    k *= 1000;

    ll tmp = k / 4 * 7;
    if(tmp <= x) ans = max(ans, tmp);
    tmp = k / 2 * 7;
    if(tmp <= x) ans = max(ans, tmp);
    tmp = k * 7;
    if(tmp <= x) ans = max(ans, tmp);

    cout << ans;

    return 0;
}