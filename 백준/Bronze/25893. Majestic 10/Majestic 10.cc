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
    while(n--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << a << " " << b  << " " << c << "\n";
        int t = (a >= 10) + (b >= 10) + (c >= 10);
        switch(t) {
        case 0:
            cout << "zilch\n\n";
            break;
        case 1:
            cout << "double\n\n";
            break;
        case 2:
            cout << "double-double\n\n";
            break;
        case 3:
            cout << "triple-double\n\n";
            break;
        }
    }

    return 0;
}