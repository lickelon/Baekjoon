#include <stdio.h>

int main()
{
	int N1, N2, N12;
	scanf("%d %d %d", &N1, &N2, &N12);
	printf("%d", (N1+1)*(N2+1)/(N12+1) - 1);
}