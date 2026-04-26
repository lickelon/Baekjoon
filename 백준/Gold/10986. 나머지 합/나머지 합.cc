#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M, input, Before = 0;
    long long result = 0;
    long long D[1000] = {};
    scanf("%d %d", &N, &M);

    for(int i = 0; i < N; i++)
    {
        scanf("%d", &input);
        Before = (input % M + Before) % M;
        D[Before]++;
    }

    result += D[0];
    for(int i = 0; i < M; i++)
    {
        if(D[i] < 2) continue;
        result += (D[i] * (D[i] - 1)) / 2;
    }
    printf("%lld", result);
    return 0;
}