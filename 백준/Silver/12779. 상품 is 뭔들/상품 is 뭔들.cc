#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

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

    ll a, b;
    cin >> a >> b;

    ll cnt = 0;
    for(ll i = 0; i * i <= b; i++) {
        if(i * i > a) cnt++;
    }
    if(cnt == 0) cout << 0;
    else {
        ll p = cnt;
        ll q = b-a;
        cout << p / gcd(p, q) << "/" << q / gcd(p, q);
    }
    
    return 0;
}