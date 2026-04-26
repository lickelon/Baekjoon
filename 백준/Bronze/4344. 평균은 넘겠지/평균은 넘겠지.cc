#include <cstdio>

int main()
{
    int T, N, sum, input, count;
    int data[1000];
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &N);
        sum = 0;
        count = 0;
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &input);
            data[j] = input;
            sum += input;
        }
        for (int j = 0; j < N; j++)
        {
            if (data[j] > sum / N) count++;
        }
        printf("%.3f%%\n", (float)count / N * 100);
    }
}