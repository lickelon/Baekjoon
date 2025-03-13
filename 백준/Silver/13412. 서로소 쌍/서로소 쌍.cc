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

        int ans = 0;
        for(int i = 1; i * i <= n; i++) {
            if(n % i != 0) continue;
            int a = i, b = n/i;
            if(gcd(a, b) == 1) ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}