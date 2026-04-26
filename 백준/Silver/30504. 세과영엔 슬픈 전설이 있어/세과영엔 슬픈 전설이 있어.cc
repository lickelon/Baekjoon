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
    vector<pii> arr2(n);

    for(int i = 0; i < n; i++) {
        cin >> arr2[i].first;
        arr2[i].second = i;
    }
    for(auto &u : arr) cin >> u;

    sort(all(arr));
    sort(all(arr2));

    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        if(arr[i] < arr2[i].first) {
            cout << "-1";
            return 0;
        }
        ans[arr2[i].second] = arr[i];
    }

    for(auto u : ans) cout << u << " ";

    return 0;
}