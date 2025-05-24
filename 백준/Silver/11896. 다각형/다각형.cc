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

    ll a, b;
    cin >> a >> b;
    if(a % 2) a += 1;
    if(b % 2) b -= 1;
    if(a <= 2) a = 4;
    if(b < a) {
        cout << 0;
        return 0;
    }
    cout << (b+a)*((b-a)/2+1)/2;

    return 0;
}