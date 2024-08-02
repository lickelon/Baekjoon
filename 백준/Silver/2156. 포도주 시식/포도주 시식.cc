#include <bits/stdc++.h>

using namespace std;

int N, dp[10001], arr[10001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for(int i = 1; i <= N; i++)
        cin >> arr[i];

    dp[1] = arr[1];
    if(N > 1) dp[2] = arr[1] + arr[2];
    if(N > 2)
        for(int i = 3; i <= N; i++)
            dp[i] = max(dp[i - 1], max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]));
    
    cout << dp[N];
    return 0;
}