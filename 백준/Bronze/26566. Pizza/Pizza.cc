#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define PI 3.141592653589793

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

inline void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    double p1, p2;
    p1 = (double)a / b;
    p2 = (c*c*PI) / d;
    cout << (p1>p2 ? "Slice of pizza" : "Whole pizza") << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(15);

    int T=1;
    cin >> T;

    while(T--)
    {
        solve();
    }

    return 0;
}