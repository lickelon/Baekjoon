#include <cstdio>

int main()
{
    int A, B;
    bool flag = true;
    while(flag)
    {
        scanf("%d %d", &A, &B);
        if (A == 0 && B == 0) return 0;
        printf("%d\n", A + B);
    }
    return 0;
}