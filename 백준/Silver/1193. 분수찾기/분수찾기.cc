#include <cstdio>

int main()
{
	int num, i;
	scanf("%d", &num);
	for (i = 1; num > i; i++)
	{
		num -= i;
	}
	if (i % 2 == 0) printf("%d/%d", num, i - num + 1);
	else printf("%d/%d", i - num + 1, num);
}