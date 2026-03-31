#include <bits/stdc++.h>

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

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int ans = 0;
    if(a + b <= d) ans += 1;
    if(c <= d) ans += 2;

    if(ans == 0) cout << "T.T";
    if(ans == 1) cout << "Shuttle";
    if(ans == 2) cout << "Walk";
    if(ans == 3) cout << "~.~";

    return 0;
} 