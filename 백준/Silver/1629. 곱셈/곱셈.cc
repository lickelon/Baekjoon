#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll _div;

ll _pow(ll a, ll b) {
    if(b == 1) return a;
    if(b == 0) return 1;
    
    ll k = _pow(a, b/2) % _div;
    if(b % 2) return ((k * k) % _div) * (a % _div);
    else return (k * k) % _div;
}

int main() {
    int a, b;
    
    cin >> a >> b >> _div;
    cout << _pow(a, b) % _div;
}
    