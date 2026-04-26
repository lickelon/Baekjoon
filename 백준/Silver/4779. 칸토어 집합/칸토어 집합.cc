#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

void f(int l, bool print) {
    if(l <= 0) {
        cout << (print ? "-" : " ");
        return;
    }
    f(l-1, print);
    f(l-1, false);
    f(l-1, print);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    while(cin >> n) {
        f(n, true);
        cout << "\n";
    }

    return 0;
}