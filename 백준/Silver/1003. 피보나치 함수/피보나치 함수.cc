#include <cstdio>

int main()
{
	int T;
	int fibo[40];

	fibo[0] = 1; fibo[1] = 1;
	for (int i = 2; i < 40; i++) fibo[i] = fibo[i - 1] + fibo[i - 2];

	scanf("%d", &T);

	while (T--)
	{
		int N;
		scanf("%d", &N);

		if (N == 0) printf("1 0\n");
		else if (N == 1) printf("0 1\n");
		else printf("%d %d\n", fibo[N - 2], fibo[N - 1]);
	}
}