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

    int t, x, m;
    cin >> t >> x >> m;
    int f = INF;
    for(int i = 0; i < m; i++) {
        int d, s;
        cin >> d >> s;
        f = min(f, (d-1)/s);
    }
    if(f == 0) cout << 0;
    else cout << x * (min(f, t) + (max(t-f, 0))/2);

    return 0;
}