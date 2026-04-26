#include <bits/stdc++.h>

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
    vector<int> arr(n*2);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i+n] = arr[i];
    }

    for(int i = 1; i < n * 2; i++) {
        arr[i] += arr[i-1];
    }

    int ans = 0;
    for(int i = k; i < n * 2; i++) {
        ans = max(ans, arr[i] - arr[i-k]);
    }
    
    cout << ans;

    return 0;
}