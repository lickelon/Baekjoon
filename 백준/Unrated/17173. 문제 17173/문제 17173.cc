#include <cstdio>

int main()
{
	int N, M;
	int input, result = 0;
	int arr[1001] = { 0, };
	scanf("%d %d", &N, &M);

	for (int i = 0; i < M; i++)
	{
		scanf("%d", &input);
		for (int j = input; j <= N; j += input)
		{
			arr[j] = 1;
		}
	}

	for (int i = 1; i <= N; i++)
	{
		if (arr[i] == 1) result += i;
	}
	printf("%d", result);
}