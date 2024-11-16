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

    int n, k, d;
    cin >> n >> k >> d;

    vector<pair<int, vector<int>>> arr(n);
    for(int i = 0; i < n; i++) {
        int m;
        cin >> m >> arr[i].first;
        arr[i].second.resize(m);
        for(auto &u : arr[i].second) cin >> u;
    }
    sort(all(arr));

    vector<int> cnt(k+1);
    int l = 0;
    int ans = 0;
    for(int r = 0; r < n; r++) {
        for(auto u : arr[r].second) cnt[u]++;
        while(arr[r].first - arr[l].first > d) {
            for(auto u : arr[l].second) cnt[u]--;
            l++;
        }
        int a = 0, b = 0;
        int s = r - l + 1;
        for(int i = 1; i <= k; i++) {
            if(cnt[i]) a++;
            if(cnt[i] == s) b++;
        }
        ans = max(ans, (a-b)*s);
    }
    cout << ans;

    return 0;
}