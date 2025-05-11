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

    int n;
    cin >> n;
    vector<pii> arr(n);
    for(auto &[a, b] : arr) {
        cin >> a >> b;
    }
    arr.emplace_back(-1000000, 1);
    arr.emplace_back(2000000, 1);
    sort(all(arr));

    int R = INF;
    for(int i = 1; i <= n; i++) {
        if(!arr[i].second) {
            if(arr[i-1].second) R = min(R, arr[i].first - arr[i-1].first);
            if(arr[i+1].second) R = min(R, arr[i+1].first - arr[i].first);
        }
    }
    int before = arr[0].first;
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(arr[i].second) {
            if(arr[i].first - before >= R) ans++;
            before = arr[i].first;
        }
    }
    cout << ans;

    return 0;
}