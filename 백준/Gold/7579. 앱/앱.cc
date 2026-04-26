#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int dp[101][10001];
int m[101];
int c[101];
int N, M;

int solve(int i, int cost)
{
    if(i > N) return 0;
    if(dp[i][cost] != -1) return dp[i][cost];
    dp[i][cost] = solve(i + 1, cost);
    if(cost - c[i] >= 0) dp[i][cost] = max(dp[i][cost], m[i] + solve(i + 1, cost - c[i]));
    return dp[i][cost];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    fill(&dp[0][0], &dp[100][10000], -1);

    cin >> N >> M;

    for(int i = 0; i < N; i++)
        cin >> m[i];
    for(int i = 0; i < N; i++)
        cin >> c[i];

    int C = 0;

    while(1)
    {
        if(solve(0, C) >= M) break;
        C++;
    }

    cout << C;

    return 0;
}