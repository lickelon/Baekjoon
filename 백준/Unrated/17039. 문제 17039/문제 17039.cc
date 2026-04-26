#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(all(a));
    if(a[2] - a[0] == 2) cout << "0\n";
    else if(a[2] - a[1] == 2 || a[1] - a[0] == 2) cout << "1\n";
    else cout << "2\n";
    cout << max(a[1]-a[0], a[2]-a[1]) - 1 << "\n";

    return 0;
}