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

    cout.precision(10);
    cout << fixed;

    int T;
    cin >> T;
    while(T--) {
        ld a;
        cin >> a;
        cout << a / 6 << "\n";
    }

    return 0;
}