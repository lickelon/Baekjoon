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
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    
    vector<ll> dp(n+1, INF);
    dp[0] = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            dp[i] = min(dp[i], dp[i-j]+arr[j]);
        }
    }
    cout << dp[n];

    return 0;
}