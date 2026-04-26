#include <cstdio>

int main()
{
	long long N, M;
	long long result;
	scanf("%lld %lld", &N, &M);
	result = N - M;
	if (result < 0) result -= result * 2;


	printf("%lld", result);
}