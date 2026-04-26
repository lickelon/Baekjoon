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

    int g, p, t;
    cin >> g >> p >> t;
    int t1 = g * p;
    int t2 = g + p*t;
    if(t1 == t2) cout << 0;
    else if(t1 < t2) cout << 1;
    else cout << 2;

    return 0;
}