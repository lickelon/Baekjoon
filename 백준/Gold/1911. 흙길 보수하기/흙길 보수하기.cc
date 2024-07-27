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

    int n, l;
    cin >> n >> l;
    vector<pii> arr(n);
    for(auto &u : arr) cin >> u.first >> u.second;
    sort(all(arr));

    int st = 0;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        st = max(st, arr[i].first);
        int ed = arr[i].second;
        if(ed <= st) continue;
        int cnt = (ed-st-1) / l + 1;
        st += l * cnt;
        ans += cnt;
    }
    cout << ans;

    return 0;
}