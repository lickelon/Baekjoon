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
    int x;
    cin >> n >> x;
    ll c = 0, ans = 0;
    vector<ll> arr1(n);
    vector<ll> arr2(n);
    for(auto &u : arr1) cin >> u;
    for(auto &u : arr2) cin >> u;
    for(int i = 0; i < n; i++) {
        ll a = arr1[i], b = arr2[i];
        c += b;
        ans += (c - a) / x;
        c -= (c - a) / x * x;
        // while(c >= a) {
        //     ans++;
        //     c -= x;
        // }
        while(c < a) {
            ans--;
            c += x;
        }
        if(ans < 0) break;
    }

    cout << (ans < 0 ? -1 : ans);

    return 0;
}