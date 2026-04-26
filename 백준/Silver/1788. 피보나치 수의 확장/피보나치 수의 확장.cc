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

    int n;
    cin >> n;
    int a, b;
    a = 0; b = 1;
    for(int i = 0; i < abs(n); i++) {
        b = a+b;
        a = b-a;
        b %= 1000000000;
        a %= 1000000000;
    }
    if(n == 0) cout << 0 << "\n";
    else if(n < 0 && n%2 == 0) cout << -1 << "\n";
    else cout << 1 << "\n";
    cout << a;

    return 0;
}