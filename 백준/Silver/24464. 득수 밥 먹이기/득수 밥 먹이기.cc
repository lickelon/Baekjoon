#include <bits/stdc++.h>

#define INF 0x7FFFFFFF
#define MOD 1000000007

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

struct _c {
    int arr[5];
};
_c dp[200001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    fill(dp[0].arr, dp[0].arr + 5, 1);
    for(int i = 0; i < n; i++)
    {
        dp[i+1].arr[0] = (dp[i+1].arr[0] + (dp[i].arr[1] % MOD)) % MOD;
        dp[i+1].arr[0] = (dp[i+1].arr[0] + (dp[i].arr[2] % MOD)) % MOD;
        dp[i+1].arr[0] = (dp[i+1].arr[0] + (dp[i].arr[3] % MOD)) % MOD;
        dp[i+1].arr[0] = (dp[i+1].arr[0] + (dp[i].arr[4] % MOD)) % MOD;
        
        dp[i+1].arr[1] = (dp[i+1].arr[1] + (dp[i].arr[0] % MOD)) % MOD;
        dp[i+1].arr[1] = (dp[i+1].arr[1] + (dp[i].arr[3] % MOD)) % MOD;
        dp[i+1].arr[1] = (dp[i+1].arr[1] + (dp[i].arr[4] % MOD)) % MOD;
        
        dp[i+1].arr[2] = (dp[i+1].arr[2] + (dp[i].arr[0] % MOD)) % MOD;
        dp[i+1].arr[2] = (dp[i+1].arr[2] + (dp[i].arr[4] % MOD)) % MOD;

        dp[i+1].arr[3] = (dp[i+1].arr[3] + (dp[i].arr[0] % MOD)) % MOD;
        dp[i+1].arr[3] = (dp[i+1].arr[3] + (dp[i].arr[1] % MOD)) % MOD;
        
        dp[i+1].arr[4] = (dp[i+1].arr[4] + (dp[i].arr[0] % MOD)) % MOD;
        dp[i+1].arr[4] = (dp[i+1].arr[4] + (dp[i].arr[1] % MOD)) % MOD;
        dp[i+1].arr[4] = (dp[i+1].arr[4] + (dp[i].arr[2] % MOD)) % MOD;
    }

    int ans = dp[n-1].arr[0];
    ans = (ans + dp[n-1].arr[1]) % MOD;
    ans = (ans + dp[n-1].arr[2]) % MOD;
    ans = (ans + dp[n-1].arr[3]) % MOD;
    ans = (ans + dp[n-1].arr[4]) % MOD;
    
    //ans = ans % MOD;

    cout << ans;

    return 0;
}