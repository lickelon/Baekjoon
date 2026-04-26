#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define PI 3.1415927

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout<<fixed; cout.precision(2);

    int x, y;
    cin >> x >> y;
    double ans = x * (1000.0 / y);
    int n;
    cin >> n;
    while(n--) {
        cin >> x >> y;
        ans = min(ans, x * (1000.0 / y));
    }
    cout << ans;
    return 0;
}