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

    int h, w;
    cin >> h >> w;
    vector<int> arr(w);
    for(auto &u : arr) cin >> u;

    int ans = 0;
    for(int i = 1; i < w-1; i++) {
        int l = 0, r = 0;
        for(int j = 0; j < i; j++) {
            l = max(l, arr[j]);
        }
        for(int j = i+1; j < w; j++) {
            r = max(r, arr[j]);
        }
        ans += max(min(r,l) - arr[i], 0);
    }

    cout << ans;

    return 0;
}