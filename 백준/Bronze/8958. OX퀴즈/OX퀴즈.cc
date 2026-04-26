#include <cstdio>

int main()
{
    int N, count, sum;
    char data[81] = { 0, };
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%s", data);
        sum = 0;
        count = 0;
        for (int j = 0; data[j] != 0; j++)
        {
            if (data[j] == 'O') count++;
            else count = 0;
            sum += count;
        }
        printf("%d\n", sum);
    }
}