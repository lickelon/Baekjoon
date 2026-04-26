#include <cstdio>

int main()
{
    int N;
    int input;
    int min, max;
    scanf("%d", &N);
    scanf("%d", &input);
    min = input;
    max = input;
    for (int i = 1; i <= N - 1; i++)
    {
        scanf("%d", &input);
        if (input < min) min = input;
        if (input > max) max = input;
    }
    printf("%d %d", min, max);
}