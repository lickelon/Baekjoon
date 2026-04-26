#include <bits/stdc++.h>

#define INF 0x7FFFFFFF
#define PI 3.141592653589793

//#define _ << " " <<
//#define endl "\n"

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

inline void solve()
{
    int M = 0, m = 99;
    int n;

    int input;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> input;
        m = min(m, input);
        M = max(M, input);
    }

    cout << (M-m)*2 << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout.fixed; cout.precision(15);

    int T;
    cin >> T;

    while(T--)
    {
        solve();
    }

    return 0;
}