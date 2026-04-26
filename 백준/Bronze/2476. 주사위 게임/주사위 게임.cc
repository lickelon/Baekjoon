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

    int t;
    cin >> t;
    int ans = 0;
    while(t--) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        if(a[0] == a[2]) {
            ans = max(ans, a[1] * 1000 + 10000);
        } else if(a[0] == a[1] || a[1] == a[2]) {
            ans = max(ans, a[1] * 100 + 1000);
        } else {
            ans = max(ans, a[2] * 100);
        }
    }
    cout << ans;
    return 0;
}