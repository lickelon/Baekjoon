#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

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
    //cout<<fixed; cout.precision(10);

    int T;
    cin >> T;
    int ans = 0;
    while(T--)
    {
        int a, d, g;
        cin >> a >> d >> g;
        ans = max(ans, ((a == d + g) + 1) * a * (d + g));
    }
    cout << ans;

    return 0;
}