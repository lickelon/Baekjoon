#include <bits/stdc++.h>

int arr[10000];
int K, N;

int check(int num)
{
        int count = 0;
        for (int i = 0; i < K; i++)
            count += arr[i] / num;
        return count;
}

int main()
{

    scanf("%d %d", &K, &N);

    for (int i = 0; i < K; i++)
        scanf("%d", &arr[i]);

    int x = 0;
    for(int b = 0x7FFFFFFF; b >= 1; b /= 2)
    {
        while(check(x+b) >= N) x += b;
    }
    printf("%d", x);
    return 0;
}