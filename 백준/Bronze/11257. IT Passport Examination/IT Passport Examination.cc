#include <bits/stdc++.h>

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
    while(n--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = b + c + d;
        cout << a << " " << sum;
        if(sum >= 55 && b > 10 && c > 7 && d >= 12) {
            cout << " PASS\n";
        }
        else cout << " FAIL\n";
    }

    return 0;
}