#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int dp[1000001];
int hdp[1000001];

int hanoi(int n) {
    if(hdp[n]) return hdp[n];
    return hdp[n] = (2 * hanoi(n-1) + 1) % 9901;
}

int solve(int n) {
    if(dp[n]) return dp[n];
    int k = n - sqrtl(n*2 + 1) + 0.5 + 1;
    return dp[n] = (2 * solve(k) + hanoi(n-k)) % 9901;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    dp[1] = 1;
    hdp[1] = 1;

    cout << solve(n);

    return 0;
}