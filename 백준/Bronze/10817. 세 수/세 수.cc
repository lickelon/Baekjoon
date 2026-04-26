#include <cstdio>

int main()
{
    int max = 0, mid = 0, min = 0;
    int input;
    scanf("%d", &max);
    scanf("%d", &input);
    if (input > max)
    {
        mid = max;
        max = input;
    }
    else mid = input;
    scanf("%d", &input);
    if (input > max)
    {
        min = mid;
        mid = max;
        max = input;
    }
    else
    {
        if (input > mid)
        {
            min = mid;
            mid = input;
        }
        else min = input;
    }
    printf("%d", mid);
}