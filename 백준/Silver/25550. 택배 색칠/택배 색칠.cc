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
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};

    ll ans = 0;
    for(int i = 1; i < n-1; i++) {
        for(int j = 1; j < m-1; j++) {
            int t = arr[i][j];
            if(t == 0) continue;
            for(int d = 0; d < 4; d++) {
                t = min(t, arr[i+dx[d]][j+dy[d]]);
            }
            if(t == arr[i][j]) ans += t-1;
            else ans += t;
        }
    }
    cout << ans << "\n";

    return 0;
}