#include <cstdio>

int main()
{
	int num[10] = { 0, };
	int result = 1, input;
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &input);
		result *= input;
	}
	while (result)
	{
		num[result % 10]++;
		result /= 10;
	}
	for (int i = 0; i < 10; i++)
		printf("%d\n", num[i]);
}