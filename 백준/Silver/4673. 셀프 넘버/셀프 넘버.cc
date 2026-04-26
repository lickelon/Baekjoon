#include <cstdio>

int d(int n)
{
    int sum = n;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    bool set[10001] = { 0, };
    int sum;
    for (int i = 1; i <= 10000; i++)
    {
        sum = d(i);
        if (sum <= 10000) set[sum] = 1;
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (!set[i]) printf("%d\n", i);
    }
}