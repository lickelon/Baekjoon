#include <cstdio>

int main()
{
	long long min, max;
	long long DMax;
	bool check[1000001] = {};
	int count = 0;
	scanf("%lld %lld", &min, &max);

	for (DMax = 0; DMax * DMax <= max; DMax++);

	for (long long i = 2; i < DMax; i++)
	{
		long long num = i * i;

		long long begin = min / num + (min % num != 0), end = max / num;

		for (long long j = begin; j <= end; j++)
		{
			check[j * num - min] = true;
		}
	}
	for (long long i = 0; i <= max - min; i++) if (!check[i]) count++;

	printf("%d", count);
}