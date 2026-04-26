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

    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    cin >> arr[0];
    for(int i = 1; i < n; i++) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }

    sort(all(arr), greater<ll>());
    ll ans = 0;
    for(int i = 0; i < k; i++) {
        ans += arr[i];
    }

    cout << ans;

    return 0;
}