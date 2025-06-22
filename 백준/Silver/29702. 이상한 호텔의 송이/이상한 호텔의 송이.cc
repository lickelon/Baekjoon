#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

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
        ll n;
        cin >> n;
        ll k = 1;
        ll cnt = 1;
        while(k*2 <= n) {
            k *= 2;
            cnt++;
        }
        while(n) {
            cout << cnt;
            cout << setfill('0') << setw(18) << (n % k)+1;
            cout << "\n";
            cnt--;
            k /= 2;
            n /= 2;
        }

    }

    return 0;
}