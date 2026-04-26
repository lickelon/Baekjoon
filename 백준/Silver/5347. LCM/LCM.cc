#include <bits/stdc++.h>

using namespace std;
using ll = long long;
ll gcd(ll a, ll b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll a, b;
        cin >> a >> b;
        cout << a * b / gcd(a, b) << "\n";
    }
}