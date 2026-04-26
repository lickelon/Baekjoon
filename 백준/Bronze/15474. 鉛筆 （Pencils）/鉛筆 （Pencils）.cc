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

    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int ans = 0;
    
    cout << min(b * ((n-1) / a + 1), d * ((n-1) / c + 1));

    return 0;
}