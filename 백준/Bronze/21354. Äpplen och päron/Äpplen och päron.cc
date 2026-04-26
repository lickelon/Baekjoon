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

    int a, p;
    cin >> a >> p;
    if(a*7 == p*13) cout << "lika";
    else if(a*7<p*13) cout << "Petra";
    else cout << "Axel";

    return 0;
}