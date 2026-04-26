#include <cstdio>
int Max = 0;
int main()
{
    int N;
    int arr[1000];
    int dp[1000];

    scanf("%d", &N);
    
    for(int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        dp[i] = 1;
        for(int j = 0; j < i; j++)
            if(arr[i] > arr[j])
                dp[i] = dp[i] > dp[j] + 1 ? dp[i] : dp[j] + 1;
        Max = Max > dp[i] ? Max : dp[i];
    }
    printf("%d", Max);
    return 0;
}