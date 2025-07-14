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

    int n, m;
    cin >> n >> m;
    ll ans = 0;
    ll mi = INF;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            ll input;
            cin >> input;
            ans += input;
            mi = min(mi, input);
        }
    }

    cout << ans - mi;
    return 0;
}