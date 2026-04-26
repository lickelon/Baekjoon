#include <cstdio>
#include <cmath>
int main()
{
	int T;

	scanf("%d", &T);

	while (T--)
	{
		int startX, startY, endX, endY;
		int N, count = 0;
		scanf("%d %d %d %d", &startX, &startY, &endX, &endY);

		scanf("%d", &N);

		for (int i = 0; i < N; i++)
		{
			int x, y, r;
			scanf("%d %d %d", &x, &y, &r);

			count += (pow(startX - x, 2) + pow(startY - y, 2) < pow(r, 2)) ^ (pow(endX - x, 2) + pow(endY - y, 2) < pow(r, 2));
		}

		printf("%d\n", count);
	}
}