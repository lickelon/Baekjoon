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

    int m, n;
    cin >> m >> n;
    if(m == n) {
        cout << m * 2 - 2;
    }
    if(m > n) {
        cout << n * 2 - 1;
    }
    if(m < n) {
        cout << m * 2 - 2;
    }

    return 0;
}