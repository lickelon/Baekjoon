#include <cstdio>

int main()
{
    int N, count = 99;
    int temp;
    scanf("%d", &N);
    if (N < 100) printf("%d", N);
    else
    {
        for (int i = 100; i <= N; i++)
        {
            temp = i / 10;
            while (temp / 10 != 0)
            {
                if (i % 10 - (i / 10) % 10 != temp % 10 - (temp / 10) % 10)
                    break;
                temp /= 10;
            }
            if (temp / 10 == 0) count++;
        }
        printf("%d", count);
    }
}