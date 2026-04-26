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

    int ans = 0;
    int curr = 0;
    for(int i = 0; i < 10; i++) {
        int a, b;
        cin >> a >> b;
        curr = curr + b - a;
        ans = max(ans, curr);
    }
    cout << ans;

    return 0;
}