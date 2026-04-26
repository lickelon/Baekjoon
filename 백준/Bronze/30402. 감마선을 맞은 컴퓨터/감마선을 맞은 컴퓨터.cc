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

    for(int i = 0; i < 15*15; i++) {
        string s;
        cin >> s;
        for(auto u : s) {
            switch (u)
            {
            case 'w':
                cout << "chunbae";
                return 0;
                break;
            case 'b':
                cout << "nabi";
                return 0;
                break;
            case 'g':
                cout << "yeongcheol";
                return 0;
                break;
            default:
                break;
            }
        }
    }

    return 0;
}