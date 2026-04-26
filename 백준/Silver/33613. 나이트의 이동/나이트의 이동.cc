#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

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
    ll r, c;
    cin >> r >> c;
    if(n == 3) {
        if(r == 2 && c == 2) cout << 1;
        else cout << 4;
        return 0;
    }

    cout << (n * n) / 2 + (n % 2 == 1 && (r + c) % 2 == 0);

    return 0;
}