#include <cstdio>
#include <cstring>

int main()
{
    int N;
    int stack[10000];
    int size = 0;
    char input[10];
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", input);
        if (strcmp(input, "push") == 0)
        {
            scanf("%d", &stack[size++]);
        }
        else if (strcmp(input, "pop") == 0)
        {
            printf("%d\n", size ? stack[--size] : -1);
        }
        else if (strcmp(input, "size") == 0)
        {
            printf("%d\n", size);
        }
        else if (strcmp(input, "empty") == 0)
        {
            printf("%d\n", size ? 0 : 1);
        }
        else if (strcmp(input, "top") == 0)
        {
            printf("%d\n", size ? stack[size - 1] : -1);
        }
    }
}