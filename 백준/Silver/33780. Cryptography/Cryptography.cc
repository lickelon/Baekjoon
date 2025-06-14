#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n;
    cin >> n;
    if(n < 2) {
        cout << "BROKEN";
        return 0;
    }
    for(ll i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            cout << "BROKEN";
            return 0;
        }
    }
    cout << "SAFE";
    return 0;
}