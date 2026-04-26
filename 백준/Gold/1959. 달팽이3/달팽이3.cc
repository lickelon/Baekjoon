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

    ll m, n;
    cin >> m >> n;
    if(m == n) {
        cout << m * 2 - 2 << "\n";
        if(m%2) cout << m/2 + 1 << " " << n/2 + 1 << "\n";
        else cout << m/2 + 1 << " " << n/2 << "\n";
    }
    if(m > n) {
        cout << n * 2 - 1 << "\n";
        if(n%2) cout <<  m - n/2 << " " << n/2 + 1 << "\n";
        else cout << n/2 + 1 << " " << n/2 << "\n";
    }
    if(m < n) {
        cout << m * 2 - 2 << "\n";
        if(m%2) cout << m/2 + 1 << " " << n - m/2 << "\n";
        else cout << m/2 + 1 << " " << m/2 << "\n";
    }

    return 0;
}