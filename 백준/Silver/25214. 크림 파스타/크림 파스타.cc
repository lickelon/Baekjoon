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
    int m;
    int ans = 0;
    cin >> m;
    cout << ans << " ";
    for(int i = 1; i < n; i++) {
        int input;
        cin >> input;
        ans = max(ans, input - m);
        m = min(m, input);
        cout << ans << " ";
    }
    return 0;
}