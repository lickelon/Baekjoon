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

    int a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    while(n--) {
        int t;
        cin >> t;
        int ans = 0;
        ans += min(t, 1000) * a;
        ans += max(t - 1000, 0) * b;
        cout << t << " " << ans << "\n";
    }

    return 0;
}