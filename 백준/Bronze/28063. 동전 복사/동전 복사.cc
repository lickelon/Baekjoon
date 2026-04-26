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

    int n;
    int x, y;
    cin >> n;
    cin >> x >> y;
    int ans = 4;
    if(x == 1) ans--;
    if(x == n) ans--;
    if(y == 1) ans--;
    if(y == n) ans--;
    cout << ans;

    return 0;
}