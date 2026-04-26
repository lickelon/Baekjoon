#include <bits/stdc++.h>

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

    int n;
    cin >> n;
    int ans = 2;
    for(int i = 3; i <= n; i += 2) {
        ans *= 2;
        ans %= 16769023;
    }
    print("{}", ans);

    return 0;
}