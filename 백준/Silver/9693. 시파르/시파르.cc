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

    int T = 1;
    while(true) {
        int n;
        cin >> n;
        if(n == 0) break;
        int ans = 0;
        while(n) {
            ans += n / 5;
            n /= 5;
        }
        cout << "Case #" << T++ << ": " << ans << "\n";
    }
    return 0;
}