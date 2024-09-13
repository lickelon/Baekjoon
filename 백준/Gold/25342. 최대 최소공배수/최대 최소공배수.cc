#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        if(n == 3) {
            cout << 6 << "\n";
            continue;
        }
        ll ans = 0;
        for(int i = 0; i < 4; i++) {
            ll temp = 1;
            for(int j = 0; j < 4; j++) {
                if(j == i) continue;
                temp = temp * (n-j) / gcd(temp, n-j);
            }
            ans = max(ans, temp);
        }
        cout << ans << "\n";
    }

    return 0;
}