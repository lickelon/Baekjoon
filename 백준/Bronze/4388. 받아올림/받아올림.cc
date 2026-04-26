#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(1);

    while(true) {
        int a, b;
        cin >> a >> b;
        if(a == b && b == 0) break;
        int carry = 0;
        int ans = 0;
        while(a > 0 || b > 0) {
            if(a % 10 + b % 10 + carry >= 10) {
                carry = 1;
                ans++;
            } else{
                carry = 0;
            }
            a /= 10;
            b /= 10;
        }
        cout << ans << "\n";
    }
    return 0;
}