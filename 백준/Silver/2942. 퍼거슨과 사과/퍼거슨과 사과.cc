#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int r, g;
    cin >> r >> g;
    int d = gcd(r, g);

    for(int i = 1; i <= d; i++) {
        if(d%i) continue;
        cout << i << " " << r/i << " " << g/i << "\n";
    }


    return 0;
}