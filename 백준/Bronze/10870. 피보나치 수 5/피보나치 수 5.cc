#include <cstdio>

int main()
{
	long long num1 = 0, num2 = 1;
	int n;
	scanf("%d", &n);
    if(n == 0) {
        printf("0\n");
        return 0;
    }
	for (int i = 1; i < n; i++)
	{
		num2 += num1;
		num1 = num2 - num1;
	}

	printf("%lld\n", num2);

	return 0;
}