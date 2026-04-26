#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	N = (N % 5 == 0) ? (N / 5) : (N / 5 + 1);
	printf("%d", N);
}