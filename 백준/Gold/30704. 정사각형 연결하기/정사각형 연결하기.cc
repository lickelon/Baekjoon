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

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        int a = sqrt(n);
        while((a+1) * (a+1) <= n) a++;
        if(a * a > n) a--;
        int ans = a * 4;
        int l = n - a * a;
        if(l > 0) {
            l -= a;
            ans += 2;
        }
        if(l > 0) {
            l -= a+1;
            ans += 2;
        }
        if(l > 0) {
            l -= a+1;
            ans += 2;
        }
        if(l > 0) {
            l -= a+2;
            ans += 2;
        }
        cout << ans << "\n";
    }

    return 0;
}