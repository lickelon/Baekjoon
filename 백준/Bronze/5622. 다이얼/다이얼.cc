#include <cstdio>

int main()
{
	char input[16];
	int temp;
	int sum = 0;
	scanf("%s", input);
	for (int i = 0; input[i] != NULL; i++)
	{
		temp = input[i] - 64;
		if (temp > 23) temp--;
		if (temp > 16) temp--;
		sum += (temp - 1) / 3 + 3;
	}
	printf("%d", sum);
}