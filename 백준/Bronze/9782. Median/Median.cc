#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    //ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    int n;
    while(true) {
        cin >> n;
        if (!n) break;
        n++;
        int ans = 0;
        for (int i = 1; i < n; i++) {
            int temp;
            cin >> temp;
            if (abs(i * 2 - n) <= 1) ans += temp;
        }
        printf("Case %d: %.1f\n", t++, (n % 2 ? ans * 0.5 : ans));
    }
    return 0;
}