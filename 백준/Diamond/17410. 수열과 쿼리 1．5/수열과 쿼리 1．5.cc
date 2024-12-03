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

    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;
    int s = sqrt(n);
    vector<array<int, 10001>> bucket(n/s+1);
    for(int i = 0; i < n; i++) {
        bucket[i/s][arr[i]]++;
    }
    for(int i = 1; i < bucket.size(); i++) {
        for(int j = 0; j <= 10000; j++) {
            bucket[i][j] += bucket[i-1][j];
        }
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int q;
        cin >> q;
        if(q == 1) {
            int idx, v;
            cin >> idx >> v;
            idx--;
            for(int i = idx / s; i < bucket.size(); i++) {
                bucket[i][arr[idx]]--;
                bucket[i][v]++;
            }
            arr[idx] = v;
        }
        if(q == 2) {
            int i, j, k;
            cin >> i >> j >> k;
            i--, j--;
            int ix = i/s, jx = j/s;
            int ans = 0;
            for(int t = k+1; t <= 10000; t++) {
                int r = bucket[jx][t];
                int l = (ix > 0) ? bucket[ix-1][t] : 0;
                ans += r-l;
            }
            for(int t = ix*s; t < i; t++) {
                ans -= (arr[t] > k);
            }
            for(int t = j+1; t < min(jx*s+s, n); t++) {
                ans -= (arr[t] > k);
            }
            cout << ans << "\n";
        }
    }


    return 0;
}