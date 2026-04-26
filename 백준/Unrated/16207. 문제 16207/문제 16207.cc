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
    sort(all(arr), greater<ll>());

    ll ans = 0;
    ll a = 0, b = 0;
    for(int i = 0; i + 1 < n; i++) {
        if(arr[i] - arr[i+1] <= 1) {
            if(a == 0) a = arr[i+1];
            else b = arr[i+1];
            i++;
        }
        if(a != 0 && b != 0) {
            ans += a*b;
            a = 0;
            b = 0;
        }
    }
    cout << ans;

    return 0;
}