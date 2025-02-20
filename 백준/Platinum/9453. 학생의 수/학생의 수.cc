#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

inline void print(int a, int b) {
    if(a >= b) return;
    cout << a+1 << " " << b+1 << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int gb = c / gcd(b, c);
    int bb = b / gcd(b, c);

    int mult = gcd(b, c);

    for(int i = 0; true; i++) {
        if(a + 1 <= gb * i) {
            mult = max(mult, i);
            break;
        }
    }

    for(int i = 0; true; i++) {
        if(d + 1 <= bb * i) {
            mult = max(mult, i);
            break;
        }
    }

    if((a * gb * mult) % 2 || (bb * d * mult) % 2) mult++;
    int gc = gb * mult;
    int bc = bb * mult;
    cout << gc << " " << bc << "\n";
    //g-g
    for(int i = 0; i < gc; i++) {
        if(a % 2) {
            print(i, (i + gc / 2) % gc);
        }
        for(int j = 1; j <= a / 2; j++) {
            print(i, (i + j) % gc);
            print(i, (i + gc - j) % gc);
        }
    }
    //g-b
    for(int i = 0; i < gc * b; i++) {
        print(i / b, i % bc + gc);
    }
    //b-b
    for(int i = 0; i < bc; i++) {
        if(d % 2) {
            print(i + gc, (i + bc / 2) % bc + gc);
        }
        for(int j = 1; j <= d / 2; j++) {
            print(i + gc, (i + j) % bc + gc);
            print(i + gc, (i + bc - j) % bc + gc);
        }
    }

    return 0;
}