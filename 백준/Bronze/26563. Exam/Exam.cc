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

inline void solve()
{
    int k;
    cin >> k;
    string a, b;
    cin >> a >> b;
    int c = 0;
    for(int i = 0; i < a.length(); i++) {
        if(a[i] == b[i]) c++;
    }
    if(c >= k) {
        cout << k + a.length()-c << "\n";
    }
    else {
        cout << c + a.length() - k << "\n";
    }
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