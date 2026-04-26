#include <cstdio>

int main()
{
	int T;

	scanf("%d", &T);

	while (T--)
	{
		int a, b, t = 1;
		scanf("%d %d", &a, &b);
		a %= 10;
		while (b > 1)
		{
			if (b % 2) t *= a;
			a *= a;
			a %= 10;
			t %= 10;
			b /= 2;
		}
		if (a == 0) printf("10\n");
		else printf("%d\n", (a * t) % 10);
	}
}