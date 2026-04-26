#include <bits/stdc++.h>

using namespace std;

#define NMax 500

int arr[NMax][NMax], dp[NMax][NMax], N;

int solve(int x, int y)
{
    int Max = 0;
    if(dp[x][y] != -1) return dp[x][y];
    if(x > 0 && arr[x - 1][y] > arr[x][y]) Max = max(Max, solve(x - 1, y));
    if(x < N - 1 && arr[x + 1][y] > arr[x][y]) Max = max(Max, solve(x + 1, y));
    if(y > 0 && arr[x][y - 1] > arr[x][y]) Max = max(Max, solve(x, y - 1));
    if(y < N - 1 && arr[x][y + 1] > arr[x][y]) Max = max(Max, solve(x, y + 1));
    return dp[x][y] = 1 + Max;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ans = 0;
    fill(&dp[0][0], &dp[NMax][NMax], -1);

    cin >> N;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            cin >> arr[j][i];

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            ans  = max(ans, solve(j, i));
    cout << ans;
    return 0;
}