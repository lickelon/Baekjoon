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

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;

    vector<int> cnt(1 << 17);
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ans += cnt[arr[i]^k];
        if(i >= m) cnt[arr[i-m]]--;
        cnt[arr[i]]++;
    }
    cout << ans;

    return 0;
}