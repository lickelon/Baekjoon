#include <bits/stdc++.h>

#define INF 0x7FFFFFFF
#define PI 3.141592653589793

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(2);

    while(true) {
        double a;
        cin >> a;
        if(a == 0) break;
        double ans = 1;
        double t = a;
        for(int i = 0; i < 4; i++) {
            ans += t;
            t *= a;
        }
        cout << ans << "\n";
    }

    return 0;
}