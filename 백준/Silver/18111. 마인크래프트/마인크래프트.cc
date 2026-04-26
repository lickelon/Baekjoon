#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int arr[500][500];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, b;
    cin >> n >> m >> b;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    ll ans = LONG_LONG_MAX;
    int minlevel = -1;
    for(int level = 0; level <= 256; level++) {
        int temp = b;
        ll cost = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cost += (level < arr[i][j] ? (arr[i][j] - level) * 2 : (level - arr[i][j]));
                temp += arr[i][j] - level;
            }
        }
        if(temp >= 0) {
            if(cost <= ans) {
                ans = cost;
                minlevel = level;
            }
        }
    }

    cout << ans << " " << minlevel;

    return 0;
}