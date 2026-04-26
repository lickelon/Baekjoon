#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll arr[1001][1001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, m, t;

    cin >> n >> m >> t;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            arr[i][j] += arr[i][j-1];
        }
        for(int j = 1; j <= m; j++) {
            arr[i][j] += arr[i-1][j];
        }
    }

    for(int i = 0; i < t; i++) {
        ll a, b, x, y;
        cin >> a >> b >> x >> y;
        cout << (arr[x][y] - arr[a-1][y] - arr[x][b-1] + arr[a-1][b-1]) / ((x-a+1)*(y-b+1)) << "\n";
    }

    return 0;
}