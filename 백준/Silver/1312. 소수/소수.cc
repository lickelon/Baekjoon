#include <bits/stdc++.h>

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

    int a, b, n;
    cin >> a >> b >> n;
    n += 1;
    while(n--) {
        if(n == 0) {
            cout << a / b;
        }
        a = a % b * 10;
    }

    return 0;
}