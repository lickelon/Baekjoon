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

    string s;
    while (getline(cin, s)) {
        for (auto u : s) {
            if (u == 'i') cout << 'e';
            else if (u == 'e') cout << 'i';
            else if (u == 'I') cout << 'E';
            else if (u == 'E') cout << 'I';
            else cout << u;
        }
        cout << "\n";
    }
    return 0;
}