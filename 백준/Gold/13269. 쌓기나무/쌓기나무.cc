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

    vector<vector<int>> arr(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            arr[i][j] *= INF;
        }
    }

    vector<int> front(m);
    for(auto &u : front) cin >> u;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            arr[j][i] = min(arr[j][i], front[i]);
        }
    }
    
    vector<int> left(n);
    for(auto &u : left) cin >> u;
    reverse(all(left));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            arr[i][j] = min(arr[i][j], left[i]);
        }
    }

    for(int i = 0; i < m; i++) {
        int M = 0;
        for(int j = 0; j < n; j++) {
            M = max(M, arr[j][i]);
        }
        if(M != front[i]) {
            cout << -1;
            return 0;
        }
    }

    for(int i = 0; i < n; i++) {
        int M = 0;
        for(int j = 0; j < m; j++) {
            M = max(M, arr[i][j]);
        }
        if(M != left[i]) {
            cout << -1;
            return 0;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}