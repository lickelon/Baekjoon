#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int dp[1001];
int func(int k) {
    if(dp[k] != -1) return dp[k];
    dp[k] = 1;
    for(int i = 0; i < k; i++) {
        if((k - i) % 2 == 0) {
            dp[k] += func((k - i) / 2);
        }
    }
    return dp[k];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    fill(dp, dp+1001, -1);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 2;
    
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        cout << func(n) << "\n";
    }
    return 0;
}