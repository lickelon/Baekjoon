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

    int d1, d2;
    cin >> d1 >> d2;

    set<pll> _s;
    for(ll i = d1; i <= d2; i++) {
        for(ll j = 0; j < i; j++) {
            _s.emplace(j/gcd(i,j), i/gcd(i,j));
        }
    }
    cout << _s.size();

    return 0;
}