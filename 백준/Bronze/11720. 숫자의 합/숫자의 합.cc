#include <cstdio>

int main()
{
	int N, sum = 0;
	scanf("%d", &N);
	getchar();
	for (int i = 0; i < N; i++)
		sum += (getchar() - '0');

	printf("%d", sum);
}