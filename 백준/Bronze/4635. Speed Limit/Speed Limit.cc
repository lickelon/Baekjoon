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

    while(true) {
        int n;
        cin >> n;
        if(n == -1) break;
        int ans = 0;
        int before = 0;
        for(int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;
            ans += a * (b - before);
            before = b;
        }
        cout << ans << " miles\n";
    }

    return 0;
}