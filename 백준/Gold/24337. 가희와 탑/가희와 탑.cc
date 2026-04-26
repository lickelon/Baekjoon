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

    int n, a, b;
    cin >> n >> a >> b;

    if(a + b - 1 > n) {
        cout << -1;
        return 0;
    }
    if(a == 1) cout << b << " ";
    for(int i = 0; i < n - (a+b-1); i++) {
        cout << "1 ";
    }
    for(int i = 1; i < a; i++) {
        cout << i << " ";
    }
    if(a > b) cout << a << " ";
    else if(a != 1) cout << b << " ";
    for(int i = b-1; i >= 1; i--) {
        cout << i << " ";
    }
    return 0;
}