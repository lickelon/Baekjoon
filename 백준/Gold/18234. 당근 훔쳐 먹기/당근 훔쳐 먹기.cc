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

    int n, t;
    cin >> n >> t;
    ll ans = 0;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        int w, p;
        cin >> w >> p;
        ans += w;
        arr[i] = p;
    }
    sort(all(arr));
    for(int i = 0; i < n; i++) {
        ans += arr[i] * (t-n+i);
    }
    cout << ans;

    return 0;
}