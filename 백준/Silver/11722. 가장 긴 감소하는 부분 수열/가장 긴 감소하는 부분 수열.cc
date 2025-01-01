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
    vector<int> arr(n), dp(n, 0);
    for(auto &e : arr) cin >> e;

    for(int i = 0; i < n; i++) {
        int M = 0;
        for(int j = 0; j < i; j++) {
            if(arr[j] > arr[i]) M = max(M, dp[j]);
        }
        dp[i] = M+1;
    }
    int ans = 0;
    for(auto e : dp) ans = max(ans, e);
    cout << ans;

    return 0;
}