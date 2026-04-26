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
    string s;
    cin >> s;
    int ans = 0;
    for(auto u : s) {
        if(u == 'D') break;
        ans++;
    }
    cout << ans << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //cout<<fixed; cout.precision(15);

    int T;
    cin >> T;

    while(T--)
    {
        solve();
    }

    return 0;
}