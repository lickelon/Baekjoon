#include <cstdio>

int main()
{
	long long num1 = 1, num2 = 1;
	int n;
	scanf("%d", &n);

	for (int i = 1; i < n; i++)
	{
		num2 += num1 * 2;
		num1 = num2 - num1 * 2;
		num1 %= 10007;
		num2 %= 10007;
	}

	printf("%lld\n", num2);

	return 0;
}