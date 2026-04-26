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

    int n, m;
    cin >> n >> m;
    vector<int> dp[10001];
    vector<int> visitable(n+1, 1);
    for(int i = 0; i < m; i++) {
        int input;
        cin >> input;
        visitable[input] = 0;
    }
    dp[1].resize(1);
    dp[1][0] = 0;
    for(int i = 1; i <= n; i++) {
        if(!visitable[i]) continue;
        for(int j = 0; j < dp[i].size(); j++) {
            if(j-1>0 && i+(j-1) <= n) {
                if(dp[i+(j-1)].size() <= j-1) dp[i+(j-1)].resize(j, 99999);
                dp[i+(j-1)][j-1] = min(dp[i+(j-1)][j-1], dp[i][j]+1);
            }
            if(j>0 && i+(j) <= n) {
                if(dp[i+(j)].size() <= j) dp[i+(j)].resize(j+1, 99999);
                dp[i+(j)][j] = min(dp[i+(j)][j], dp[i][j]+1);
            }
            if(j+1>0 && i+(j+1) <= n) {
                if(dp[i+(j+1)].size() <= j+1) dp[i+(j+1)].resize(j+2, 99999);
                dp[i+(j+1)][j+1] = min(dp[i+(j+1)][j+1], dp[i][j]+1);
            }
        }
    }

    int ans = 99999;
    for(auto u : dp[n]) {
        ans = min(ans, u);
    }
    cout << (ans == 99999 ? -1 : ans);

    return 0;
}