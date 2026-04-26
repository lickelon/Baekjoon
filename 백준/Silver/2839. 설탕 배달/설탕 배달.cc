#include <cstdio>

int main()
{
	int N;
	int c;
	scanf("%d", &N);
	c = N / 5;
	while ((N - c * 5) % 3 != 0 && c > -1)
	{
		c--;
	}
	if (c == -1) printf("-1");
	else printf("%d", c + (N - c * 5) / 3);
}