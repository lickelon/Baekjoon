#include <cstdio>

int main()
{
    int input;
    int j;
    scanf("%d", &input);
    for (int i = -input + 1; i < input; i++)
    {
        for (i > 0 ? j = i : j = -i; j < input; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}