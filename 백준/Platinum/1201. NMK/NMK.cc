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

    int n, m, k;
    cin >> n >> m >> k;
    bool swap = m < k;
    if(m < k) {
        int temp = m;
        m = k;
        k = temp;
    }
    if(n < m + k - 1 || n > m * k) {
        cout << -1;
        return 0;
    }
    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        ans[i] = (n - m + i) % n + 1;
    }
    for(int i = m; i < n; i += k - 1) {
        reverse(ans.begin() + i, ans.begin() + min(i + k-1, n));
    }
    if(swap) reverse(all(ans));
    for(auto u : ans) cout << u << " ";
    return 0;
}