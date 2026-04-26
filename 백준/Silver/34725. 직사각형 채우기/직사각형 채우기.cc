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

    int n, m;
    cin >> n >> m;

    vector<vector<int>> ans(n, vector<int>(m));

    n /= 2; m /= 2;
    for(int x = 0; x < n; x++) {
        for(int y = 0; y < m; y++) {
            ans[x][y] = ans[x+n][y] = ans[x][y+m] = ans[x+n][y+m] = y + x * m + 1;
        }
    }

    for(auto v : ans) {
        for(auto e : v) {
            print("{} ", e);
        }
        println("");
    }

    return 0;
}