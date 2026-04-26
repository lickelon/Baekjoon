#include <cstdio>

int main()
{
    int input, N;
    int max = 0;
    int sum = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &input);
        if (input > max) max = input;
        sum += input;
    }

    printf("%.3f", (((float)sum / N) / max) * 100);
}