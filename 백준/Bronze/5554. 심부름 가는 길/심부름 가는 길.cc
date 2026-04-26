#include <cstdio>

int main()
{
    int result = 0, input;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &input);
        result += input;
    }
    printf("%d\n%d", result / 60, result % 60);
}