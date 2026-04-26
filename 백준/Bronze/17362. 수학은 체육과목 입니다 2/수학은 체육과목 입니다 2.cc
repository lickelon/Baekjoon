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

    int n;

    int s, k;

    cin >> n;

    s = ((n - 1) / 4) % 2;
    k = (n - 1) % 4;

    int ans;

    if(s) ans = 5 - k;
    else ans = k + 1;

    cout << ans;

    return 0;
}