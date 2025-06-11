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
    cout.precision(6);
    cout << fixed;
    ld a, b, h, x;
    cin >> a >> b >> h;
    if(a == b) {
        cout << -1;
        return 0;
    }
    if(a > b) swap(a, b);

    x = a * h / (b-a);
    cout << ((powl(x+h, 2) + powl(b, 2))-(powl(x, 2) + powl(a, 2))) * acosl(-1);

    return 0;
}