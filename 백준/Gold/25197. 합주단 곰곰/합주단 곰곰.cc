#include <bits/stdc++.h>

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
    cout.fixed; cout.precision(10);

    int n, k;
    cin >> n >> k;

    ld ans = (n * (n-1)) / (2.0 * k);

    cout << ans;

    return 0;
}