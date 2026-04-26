#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 987654321

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, r;
    cin >> n >> m >> r;

    vector<int> items(n);
    for(auto &u : items) cin >> u;

    vector<vector<int>> arr(n, vector<int>(n, INF));
    for(int i = 0; i < r; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        arr[a-1][b-1] = c;
        arr[b-1][a-1] = c;
    }
    for(int i = 0; i < n; i++) {
        arr[i][i] = 0;
    }

    for(int k = 0; k < n; k++) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(arr[i][j] > arr[i][k] + arr[k][j]) {
                    arr[i][j] = arr[i][k] + arr[k][j];
                }
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i][j] <= m) sum += items[j];
        }
        ans = max(ans, sum);
    }
    cout << ans;

    return 0;
}