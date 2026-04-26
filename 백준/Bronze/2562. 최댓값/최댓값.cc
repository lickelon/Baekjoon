#include <cstdio>

int main()
{
	int input, max = 0, max_p;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &input);
		if (input > max)
		{
			max = input;
			max_p = i + 1;
		}
	}
	printf("%d\n%d", max, max_p);
}