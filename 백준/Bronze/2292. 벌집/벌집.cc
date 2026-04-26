#include <cstdio>

int main()
{
	int num, i;
	scanf("%d", &num);
	if (num-- == 1) printf("1");
	else
	{
		for (i = 1; num > i * 6; i++)
		{
			num -= i * 6;
		}
		printf("%d", i + 1);
	}
}