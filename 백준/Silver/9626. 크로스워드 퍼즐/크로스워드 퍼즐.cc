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
    int u, l, r, d;
    cin >> n >> m;
    cin >> u >> l >> r >> d;
    for(int i = 0; i < n + u + d; i++) {
        for(int j = 0; j < m + l + r; j++) {
            if(j == l && u <= i && i < u + n) {
                string s;
                cin >> s;
                cout << s;
                j += m - 1;
            }
            else {
                cout << ((i + j) % 2 ? '.' : '#');
            }
        }
        cout << "\n";
    }

    return 0;
}