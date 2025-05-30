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

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(auto &e : arr) cin >> e;
    ranges::sort(arr);

    int l = 0, r = n-1;
    int ans = 0;
    while(l < r) {
        int temp = arr[l] + arr[r];
        if(temp <= k) {
            ans++;
            l += 1;
            r -= 1;
        }
        else {
            r -= 1;
        }
    }
    cout << ans;

    return 0;
}