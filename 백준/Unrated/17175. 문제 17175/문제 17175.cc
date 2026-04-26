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
    vector<int> arr(n+1);
    arr[n] = 1;
    for(int i = n; i >= 2; i--) {
        arr[i] %= 1000000007;
        arr[i-2] += arr[i];
        arr[i-1] += arr[i];
    }

    ll ans = 0;
    for(int i = 0; i <= n; i++) {
        ans += arr[i];
        ans %= 1000000007;
    }
    cout << ans;

    return 0;
}