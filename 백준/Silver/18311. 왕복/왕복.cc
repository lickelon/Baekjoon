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
    ll k;
    cin >> n >> k;
    vector<int> arr(2*n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[2 *n - 1 - i] = arr[i];
    }
    int ans = 1;
    for(auto u : arr) {
        if(k >= u) {
            k -= u;
            ans++;
        } else {
            break;
        }
    }
    cout << (ans <= n ? ans : 2*n - ans + 1);

    return 0;
}