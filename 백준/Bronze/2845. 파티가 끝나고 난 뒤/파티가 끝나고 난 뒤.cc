#include <cstdio>

int main()
{
	int count, input;
	scanf("%d", &count);
	scanf("%d", &input);
	count *= input;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &input);
		printf("%d ", input - count);
	}
}