#include <cstdio>

int main()
{
    int input;
    int a, b;
    int count = 0;
    scanf("%d", &input);
    a = input / 10;
    b = input % 10;
    do
    {
        a += b;
        a %= 10;
        a += b;
        b -= a;
        a += b;
        b = -b;
        count++;
    } while (a * 10 + b != input);
    printf("%d", count);
}