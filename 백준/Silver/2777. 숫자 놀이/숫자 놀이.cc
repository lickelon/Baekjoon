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
        int ans = (n==1);
        for(int i = 9; i > 1; i--) {
            while(n % i == 0) {
                n /= i;
                ans++;
            }
        }
        if(n > 9) cout << "-1\n";
        else cout << ans << "\n";
    }

    return 0;
}