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
        int a, b, c;
        cin >> a >> b >> c;
        int ab, bc, ca;
        cin >> ab >> bc >> ca;
        int ans = 0;
        for(int i = 0; i <= min(a, b); i++) {
            for(int j = 0; j <= min(a-i, c); j++) {
                int temp = 0;
                temp += i * ab;
                temp += j * ca;
                temp += min(b-i, c-j) * bc;
                ans = max(ans, temp);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}