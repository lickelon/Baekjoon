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

    int n;
    cin >> n;
    int ans = 0;
    if(n % 7 == 0) ans += 1;
    while(n) {
        if(n % 10 == 7) {
            ans += 2;
            break;
        }
        n /= 10;
    }
    cout << ans;

    return 0;
}