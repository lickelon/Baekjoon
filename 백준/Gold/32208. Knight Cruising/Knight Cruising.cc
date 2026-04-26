#define _SILENCE_CXX17_C_HEADER_DEPRECATION_WARNING

#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    while (n--) {
        ll x, y, z;
        cin >> x >> y >> z;
        cout << ((x + y + z) % 2 == 0 ? "YES" : "NO") << "\n";
    }


    return 0;
}