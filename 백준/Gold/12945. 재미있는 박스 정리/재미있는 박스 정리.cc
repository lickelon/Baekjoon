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
    for(auto &u : arr) cin >> u;
    sort(all(arr));
    int ans = n;
    int l = 0, r = n / 2;
    while(r < n && l < n/2) {
        if(arr[l]*2 <= arr[r]) {
            ans -= 1;
            l++;
            r++;
        }
        else {
            r++;
        }
    }
    cout << ans;

    return 0;
}