#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 987654321

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
    for(auto &e : arr) cin >> e;
    
    vector<int> dp(n, INF);
    dp[0] = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= arr[i]; j++) {
            if(i+j >= n) break;
            dp[i+j] = min(dp[i+j], dp[i] + 1);
        } 
    }
    cout << (dp[n-1] == INF ? -1 : dp[n-1]);

    return 0;
}