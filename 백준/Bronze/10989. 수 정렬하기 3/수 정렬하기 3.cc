#include <cstdio>

int main()
{
	int num[10000] = { 0 };
	int N, tmp;
	scanf("%d", &N);
	for (; N > 0; N--)
	{
		scanf("%d", &tmp);
		num[--tmp]++;
	}
	for (int i = 0; i < 10000; i++)
	{
		for (int j = 0; j < num[i]; j++)
		{
			printf("%d\n", i + 1);
		}
	}
}