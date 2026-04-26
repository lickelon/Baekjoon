#include <cstdio>
#include <algorithm>
#include <vector>

int main()
{
	long long N, M, input, find, sum = 0;
	std::vector<long long> _v;
	scanf("%lld %lld", &N, &M);

	for (int i = 0; i < N; i++)
	{
		scanf("%lld", &input);
		_v.push_back(input);
	}

	std::sort(_v.rbegin(), _v.rend());

	for (int i = 1; i <= N; i++)
	{
		sum += (_v[i - 1] - _v[i]) * i;
		if (sum >= M)
		{
			find = i;
			break;
		}
	}
	long long result = (sum - M) > find ? ((sum - M) / find + _v[find]) : _v[find];
	printf("%lld", result);

	return 0;
}