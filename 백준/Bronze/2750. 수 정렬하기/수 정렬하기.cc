#include <cstdio>

int main()
{
	int N, input;
	bool arr[2001] = { 0 };
	scanf("%d", &N);
	while (N--)
	{
		scanf("%d", &input);
		arr[input + 1000] = true;
	}
	for (int i = 0; i < 2001; i++)
	{
		if (arr[i]) printf("%d\n", i - 1000);
	}
}