#include <stdio.h>

int main()
{
	int n, m, k, a, b;
	scanf("%d %d %d", &n, &m, &k);
	a = (k + 1) / m;
	b = (k + 1) % m - 1;
	if (b == -1)
	{
		b = m - 1;
		a--;
	}
	printf("%d %d", a, b);
}