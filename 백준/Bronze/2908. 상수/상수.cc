#include <cstdio>

int main()
{
	int a, b, _a = 0, _b = 0;
	scanf("%d %d", &a, &b);
	while (a != 0)
	{
		_a = _a * 10 + (a % 10);
		_b = _b * 10 + (b % 10);
		a /= 10;
		b /= 10;
	}
	printf("%d",_a > _b ? _a : _b);
}