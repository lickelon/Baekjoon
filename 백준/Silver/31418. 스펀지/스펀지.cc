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

    ll W, H, K, T;
    cin >> W >> H >> K >> T;
    ll ans = 1;
    for(int i = 0; i < K; i++) {
        ll x, y;
        cin >> x >> y;
        ans *= (min(W, x + T) - max(1ll, x - T) + 1) % 998244353;
        ans %= 998244353;
        ans *= (min(H, y + T) - max(1ll, y - T) + 1) % 998244353;
        ans %= 998244353;
    }
    cout << ans;

    return 0;
}