#include <bits/stdc++.h>

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

    double a, b;
    while (true) {
        cin >> a >> b;
        if (a * b == 0) cout << "AXIS\n";
        else if (a * b > 0) {
            if (a > 0) cout << "Q1\n";
            else cout << "Q3\n";
        }
        else {
            if (a > 0) cout << "Q4\n";
            else cout << "Q2\n";
        }
        if (a == 0 && b == 0) break;
    }
    return 0;
}