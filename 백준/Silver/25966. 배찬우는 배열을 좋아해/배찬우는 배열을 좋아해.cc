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

    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> arr(n, vector<int>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    vector<int> idx(n);
    for(int i = 0; i < n; i++) {
        idx[i] = i;
    }
    while(q--) {
        int x;
        cin >> x;
        if(x == 0) {
            int i, j, k;
            cin >> i >> j >> k;
            arr[idx[i]][j] = k;
        }
        if(x == 1) {
            int i, j;
            cin >> i >> j;
            swap(idx[i], idx[j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            print("{} ", arr[idx[i]][j]);
        }
        println("");
    }

    return 0;
}