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

    vector<vector<int>> matrix(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[j][i];
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int input;
            cin >> input;
            matrix[j][i] = abs(matrix[j][i] - input);
        }
    }
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        arr[i] = 0;
        for(int j = 0; j < n; j++) {
            arr[i] = max(arr[i], matrix[i][j]);
        }
    }

    int ans = 0;
    for(int i = 0; i < m; i++) {
        int input;
        cin >> input;
        ans += arr[input-1];
    }
    cout << ans;

    return 0;
}