#include <cstdio>
#include <cmath>

int main()
{
	int A, B, N, num = 0, i;
	scanf("%d %d %d", &A, &B, &N);
	while(--N >= 0)
	{
		scanf("%d", &i);
		num += i * pow(A,N);
	}
	for (i = 1; num / i != 0; i *= B){}
	i /= B;
	while (i > 0)
	{
		printf("%d ", num / i);
		num %= i;
		i /= B;
	}
}