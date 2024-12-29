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

    int a, b, c;
    cin >> a >> b >> c;

    for(int i = c; i >= 0; i--) {
        int ta = a + (c-i);
        int tb = b + i;
        if(ta % 3 == 0 && tb % 4 == 0) {
            cout << ta/3 << " " << tb/4;
            return 0;
        }
    }
    cout << -1;
    return 0;
}