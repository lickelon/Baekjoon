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
    int m;
    cin >> n >> m;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ll input;
        cin >> input;
        ans += input;
    }
    for(int i = 0; i < m; i++) {
        ll input;
        cin >> input;
        if(input) ans *= input;
    }
    cout << ans;
    return 0;
}