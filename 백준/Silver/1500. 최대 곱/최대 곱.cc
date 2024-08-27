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

    ll s, k;
    cin >> s >> k;
    ll ans = 1;
    for(int i = 0; i < k; i++) {
        if(i < s%k) ans *= (s/k)+1;
        else ans *= (s/k);
    }
    cout << ans;

    return 0;
}