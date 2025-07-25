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

    int n;
    cin >> n;
    vector<vector<int>> arr(n+1, vector<int>(n+1, 1));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    cout << arr[n][n] << " "  << n*n;
    return 0;
}