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
    int a = 1, b = 2;
    for(int i = 1; i < n; i++) {
        b = a + b;
        a = b - a;
        b %= 10007;
        a %= 10007;
    }

    cout << a;

    return 0;
}