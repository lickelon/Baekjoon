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

    ll S;
    cin >> S;

    int i;
    for(i = 0; i <= S; i++) {
        S -= i;
    }
    cout << i - 1;

    return 0;
}