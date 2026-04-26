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

    int n, l, c;
    cin >> n >> l >> c;

    int ans = INF;
    
    for(int k = 1; k*l + k-1 <= c && k <= n; k++) {
        if(k % 13 == 0) continue;
        int r = n % k;
        if(r) {
            if(r % 13 == 0 && r + 1 == k) r = 2;
            else r = 1;
        }
        ans = min(ans, n / k + r);
    }

    cout << ans;

    return 0;
}