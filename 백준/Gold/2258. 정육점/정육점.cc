#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool comp(pii &a, pii &b) {
    if(a.second == b.second) {
        return a.first > b.first;
    }
    return a.second < b.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<pii> arr(n);
    for(auto &u : arr) {
        cin >> u.first >> u.second;
    }
    sort(all(arr), comp);

    unsigned int ans = INF + 1;
    unsigned int wsum = 0;
    unsigned int psum = 0;

    for(int i = 0; i < n; i++) {
        wsum += arr[i].first;
        if(i > 0 && arr[i-1].second == arr[i].second) {
            psum += arr[i].second;
        }
        else {
            psum = 0;
        }

        if(wsum >= m) {
            ans = min(ans, psum + arr[i].second);
        }
    }
    if(ans == INF+1) cout << "-1";
    else cout << ans;

    return 0;
}