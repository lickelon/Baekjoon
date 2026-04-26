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
    //cout<<fixed; cout.precision(2);

    int a, b, c, d;
    int p, m, n;
    cin >> a >> b >> c >> d;
    cin >> p >> m >> n;

    cout << ((p-1) % (a+b) < a) + ((p-1) % (c+d) < c) << "\n";
    cout << ((m-1) % (a+b) < a) + ((m-1) % (c+d) < c) << "\n";
    cout << ((n-1) % (a+b) < a) + ((n-1) % (c+d) < c) << "\n";

    return 0;
}