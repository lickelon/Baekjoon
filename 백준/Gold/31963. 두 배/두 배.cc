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
    ll ans = 0;
    ll cnt = 0;
    for(int i = 1; i < n; i++) {
        //2^cnt*a <= b*2^next
        ll next = cnt;
        ll a = arr[i-1], b = arr[i];
        while(a > b) {
            b *= 2;
            next++;
        }
        while(a * 2 <= b) {
            a *= 2;
            next--;
        }
        next = max(next, 0ll);
        ans += next;
        cnt = next;
    }
    cout << ans;

    return 0;
}