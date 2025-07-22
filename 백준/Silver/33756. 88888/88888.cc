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
        ll curr = 888888888888888888;
        ll n;
        cin >> n;
        int cnt = 0;
        while(curr && cnt < 8) {
            if(n >= curr) {
                n -= curr;
                cnt++;
            }
            else {
                curr /= 10;
            }
        }
        cout << (n == 0 ? "Yes" : "No") << "\n";
    }

    return 0;
}