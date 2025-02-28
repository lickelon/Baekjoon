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

    ll n;
    cin >> n;

    ll ans = LLONG_MAX;
    for(ll i = 0; i < 5; i++) {
        if(n - 3*i < 0) continue;
        if((n - 3*i) % 5 == 0) {
            ans = min(ans, i + (n-3*i)/5);
        }
    }
    if(ans == LLONG_MAX) cout << -1;
    else cout << ans;
    return 0;
}