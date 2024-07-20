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

    int a, b;
    cin >> a >> b;
    ll g = b-a;
    while(g != 0 && g%2 == 0) g /= 2;
    for(int i = 0; i < 5; i++) {
        int p, q;
        cin >> p >> q;
        ll x = q-p;
        if(g*x == 0) {
            if(g == x) cout << "Y";
            else cout << "N";
        }
        else if(g*x > 0) {
            cout << (x%g ? "N" : "Y");
        }
        else {
            cout << "N";
        }
        cout << "\n";
    }

    return 0;
}