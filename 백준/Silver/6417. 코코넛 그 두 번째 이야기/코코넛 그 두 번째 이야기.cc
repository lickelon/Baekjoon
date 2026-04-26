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

    while(true) {
        int n;
        cin >> n;
        if(n == -1) break;
        int ans = 0;
        for(int i = 2; i < n; i++) {
            int temp = n;
            int j;
            for(j = 0; j < i; j++) {
                temp -= 1;
                if(temp % i != 0) break;
                temp = (temp / i) * (i - 1);
            }
            if(j == i && temp % i == 0) {
                ans = i;
            }
        }
        cout << n << " coconuts, ";
        if(ans == 0) {
            cout << "no solution\n";
        }
        else {
            cout << ans << " people and 1 monkey\n";
        }
    }

    return 0;
}