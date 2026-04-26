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

    int q;
    cin >> q;
    map<ll, ll> _m;
    while(q--) {
        ll a, b, c;
        cin >> a >> b >> c;
        if(a == 1) {
            _m[c] = b;
        }
        else {
            ll temp = b+c;
            while(b != c) {
                if(b > c) {
                    if(_m.find(b) != _m.end()) b = _m[b];
                    else b /= 2;
                    temp += b;
                }
                else {
                    if(_m.find(c) != _m.end()) c = _m[c];
                    else c /= 2;
                    temp += c;
                }
            }
            cout << temp - b << "\n";
        }
    }

    return 0;
}