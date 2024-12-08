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

    int n;
    cin >> n;
    ll ans = 1;
    for(int i = 0; i < n; i++) {
        ll input;
        cin >> input;
        ans /= gcd(ans, input);
        ans *= input;
    }
    cout << ans * 2;

    return 0;
}