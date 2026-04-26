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

    int n, ans = INF, a, b;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b;
        if(a <= b) ans = min(ans, b);
    }
    cout << (ans == INF ? -1 : ans);

    return 0;
}