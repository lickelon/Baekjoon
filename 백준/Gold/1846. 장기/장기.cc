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
    if(n == 3) {
        cout << -1;
        return 0;
    }
    //~ ~ ~ ~ 1 n ~ ~ ~ ~
    int i = 1;
    for(; i < (n+1) / 2; i++) {
        cout << i+1 << "\n";
    }
    cout << "1\n" << n << "\n";
    for(; i < n-1; i++) {
        cout << i+1 << "\n";
    }

    return 0;
}