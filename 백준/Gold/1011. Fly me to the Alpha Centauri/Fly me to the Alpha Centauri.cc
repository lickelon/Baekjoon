#include <cstdio>

int main()
{
	int T;
	int dist, input, count, i;
	scanf("%d", &T);
	while (T--)
	{
		count = 0;
		scanf("%d %d", &input, &dist);
		dist = dist - input;
		for (i = 1; dist > i * 2; i++)
		{
			dist -= i * 2;
			count += 2;
		}
		if (dist > i) count += 2;
		else if (dist > 0) count++;
		printf("%d\n", count);
	}
}