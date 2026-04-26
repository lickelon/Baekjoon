#include <cstdio>

int main()
{
	int T;

	scanf("%d", &T);

	while (T--)
	{
		int n, m;
		int result = 1;
		scanf("%d %d", &n, &m);

		if (m - n < n) n = m - n;

		for (int i = 0; i < n; i++)
		{
			result = result * (m - i) / (i + 1);
		}

		printf("%d\n", result);
	}
}