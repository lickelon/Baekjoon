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

    ll k, a, b, c, d;
    cin >> k >> a >> b >> c >> d;
    if(a*k+b == c*k+d) {
        cout << "Yes " << a*k+b;
    }
    else {
        cout << "No";
    }

    return 0;
}