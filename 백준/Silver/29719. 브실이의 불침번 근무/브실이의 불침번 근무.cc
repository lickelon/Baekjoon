#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define MOD 1000000007

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    ll ans = 1;
    for(int i = 0; i < n; i++) {
        ans *= m;
        ans %= MOD;
    }
    ll temp = 1;
    for(int i = 0; i < n; i++) {
        temp *= m-1;
        temp %= MOD;
    }
    ans += MOD - temp;
    ans %= MOD;
    cout << ans;

    return 0;
}