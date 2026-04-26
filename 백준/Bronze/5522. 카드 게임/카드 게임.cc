#include <cstdio>

int main()
{
    int input, result = 0;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &input);
        result += input;
    }
    printf("%d", result);
}