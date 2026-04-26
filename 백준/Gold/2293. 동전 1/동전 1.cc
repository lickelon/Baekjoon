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
    vector<int> dp(k+1);
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(all(arr));

    dp[0] = 1;
    
    for(int j = 0; j < n; j++) {
        for(int i = arr[j]; i <= k; i++) {
            dp[i] += dp[i-arr[j]];
        }
    }
    cout << dp[k];

    return 0;
}