#include <stdio.h>

int main()
{
	int x, y, a, b;
	scanf("%d %d", &x, &y);
	a = x, b = y;
	scanf("%d %d", &x, &y);
	if (a == x)a = 0;
	else a += x;
	if (b == y)b = 0;
	else b += y;
	scanf("%d %d", &x, &y);

	if (a == 0) printf("%d ", x);
	else printf("%d ", a - x);

	if (b == 0) printf("%d ", y);
	else printf("%d ", b - y);
}