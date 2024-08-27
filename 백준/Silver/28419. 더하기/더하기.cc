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
    ll os = 0, es = 0;
    for(int i = 1; i <= n; i++) {
        ll input;
        cin >> input;
        if(i%2) os += input;
        else es += input;
    }
    if(n == 3 && os > es) cout << -1;
    else cout << abs(os-es);

    return 0;
}