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

    int n, a, b, c;
    cin >> n >> a >> b >> c;
    ll ans = 1;
    for(int i = 1; i <= n; i++) {
        ans *= i;
    }
    for(int i = 1; i <= a; i++) ans /= i;
    for(int i = 1; i <= b; i++) ans /= i;
    for(int i = 1; i <= c; i++) ans /= i;

    cout << ans;

    return 0;
}