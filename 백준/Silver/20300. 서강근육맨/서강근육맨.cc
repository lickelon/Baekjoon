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
    vector<ll> arr(n);
    for(auto &u : arr) cin >> u;
    if(n%2) {
        arr.push_back(0);
        n+=1;
    }
    sort(all(arr));
    ll ans = 0;
    for(int i = 0; i < n/2; i++) {
        ans = max(ans, arr[i] + arr[n-1-i]);
    }
    cout << ans;

    return 0;
}