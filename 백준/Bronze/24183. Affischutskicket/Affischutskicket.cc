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

    double a, b, c;

    cin >> a >> b >> c;

    double sum = 0;

    sum += a * 2 * 0.074196;
    sum += b * 2 * 0.12474;
    sum += c * 0.06237;

    cout << sum;

    return 0;
}