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

    int n, m;
    cin >> n >> m;
    int ans = 0;
    int space = m;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        if(space < input) {
            ans++;
            space = m;
        }
        space -= input;
    }
    cout << ans + (space != m);

    return 0;
}