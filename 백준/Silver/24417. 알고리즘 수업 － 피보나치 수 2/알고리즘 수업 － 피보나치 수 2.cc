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

    ll n;
    cin >> n;
    
    ll a = 0, b = 1;
    for(int i = 0; i < n; i++) {
        b += a;
        a = b - a;
        b %= 1000000007;
        a %= 1000000007;
    }

    cout << a << " " << n - 2;

    return 0;
}