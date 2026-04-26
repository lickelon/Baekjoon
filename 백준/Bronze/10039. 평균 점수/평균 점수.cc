#include <cstdio>

int main()
{
    int input, result = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &input);
        if (input < 40) input = 40;
        result += input;
    }
    printf("%d", result / 5);
}