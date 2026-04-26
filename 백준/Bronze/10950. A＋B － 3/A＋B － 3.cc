#include <cstdio>

int main()
{
    int count;
    int A, B;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d %d", &A, &B);
        printf("%d\n", A + B);
    }
    return 0;
}