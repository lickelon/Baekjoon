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

    ll x;
    cin >> x;
    if(x == 0) {
        cout << "LICKELON";
        return 0;
    }
    ll a = 0;
    while(a*a <= x) {
        a++;
    }
    a--;
    ll b = a;
    while(a*b <= x) {
        b++;
    }
    b--;

    for(int i = 0; i < a; i++) cout << "A";
    cout << "BCDEFGHIJKLMNOPQRSTUVWXY";
    for(int i = 0; i < b; i++) cout << "Z";

    ll c = x - a*b;
    for(int i = 0; i < c; i++) cout << "A";
    cout << "BCDEFGHIJKLMNOPQRSTUVWXYZ";

    return 0;
}