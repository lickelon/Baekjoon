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
    for(auto & u : arr) {
        cin >> u;
    }

    sort(all(arr));

    int ans = 0;
    if(n % 2) ans += arr[n/2];
    for(int i = 0; i < n/2; i++) {
        ans += arr[n-1-i] * 2;
    }

    cout << ans;

    return 0;
}