#include <cstdio>

int main()
{
	int H, W, N, T;
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d %d %d", &H, &W, &N);
		printf("%d%02d\n", N % H == 0 ? H : N % H, N % H == 0 ? N / H : N / H + 1);
	}
}