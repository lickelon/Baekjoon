#include <cstdio>

int main()
{
    int input;
    int burger = 2000, drink = 2000;
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &input);
        if (input < burger) burger = input;
    }
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &input);
        if (input < drink) drink = input;
    }
    printf("%d", burger + drink - 50);
}