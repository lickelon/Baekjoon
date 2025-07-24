#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

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
    vector<vector<int>> e(n+1);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        e[a].emplace_back(b);
        e[b].emplace_back(a);
    }

    vector<int> ans(n+1);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= 4; j++) {
            bool flag = true;
            for(auto v : e[i]) {
                if(ans[v] == j) {
                    flag = false;
                }
            }
            if(flag) {
                ans[i] = j;
                break;
            }
        }
        cout << ans[i];
    }

    return 0;
}