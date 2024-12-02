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
    vector<vector<int>> bucket(n/s+1);
    for(int i = 0; i < n; i++) {
        bucket[i/s].emplace_back(arr[i]);
    }
    for(auto &e : bucket) {
        sort(all(e));
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int q;
        cin >> q;
        if(q == 1) {
            int l, r, k;
            cin >> l >> r >> k;
            l--, r--;
            int ans = 0;
            for(int i = l; i <= r; i++) {
                if((i-1)/s != (i/s) && i+s-1 <= r) {
                    int idx = i/s;
                    ans += bucket[idx].end() - upper_bound(all(bucket[idx]), k);
                    i += s-1;
                }
                else {
                    ans += (arr[i] > k);
                }
            }
            cout << ans << "\n";
        }
        if(q == 2) {
            int i, k;
            cin >> i >> k;
            i--;
            int idx = i/s;
            *lower_bound(all(bucket[idx]), arr[i]) = k;
            arr[i] = k;
            sort(all(bucket[idx]));
        }
    }


    return 0;
}