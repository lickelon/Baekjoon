#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int dp[101][10];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= 9; i++) {
        dp[1][i] = 1;
    }

    for(int i = 2; i <= n; i++) {
        for(int j = 0; j <= 9; j++) {
            int temp = 0;
            if(j - 1 >= 0) temp += dp[i-1][j-1];
            if(j + 1 <= 9) temp += dp[i-1][j+1];
            dp[i][j] = temp % 1000000000;
        }
    }

    int ans = 0;
    for(int i = 0; i <= 9; i++) {
        ans += dp[n][i];
        ans %= 1000000000;
    }
    cout << ans;

    return 0;
}