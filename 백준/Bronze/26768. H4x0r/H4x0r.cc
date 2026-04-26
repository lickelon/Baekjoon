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

    string s;
    cin >> s;
    for(auto u : s) {
        switch(u) {
        case 'a':
            cout << "4";
            break;
        case 'e':
            cout << "3";
            break;
        case 'i':
            cout << "1";
            break;
        case 'o':
            cout << "0";
            break;
        case 's':
            cout << "5";
            break;
        default:
            cout << u;
            break;

        }
    }

    return 0;
}