#include <stdio.h>

int main()
{
	int N, T, P, C;
	scanf("%d %d %d %d", &N, &T, &P, &C);
	printf("%d", ((N - 1) / T) * P * C);
}