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

    int n;
    cin >> n;

    int ans = 1;
    for(int i = n; i >= 1; i--) {
        ans *= i;
        while(ans % 10 == 0) ans /= 10;
        ans %= 100000;
    }
    cout << ans % 10;
    return 0;
}