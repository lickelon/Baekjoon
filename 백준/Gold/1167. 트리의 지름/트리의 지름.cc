#include <cstdio>
#include <algorithm>
#include <vector>

std::vector<std::pair<int, int>> node[100001]; //second, weight
int maxLengthNode, maxLength = 0, N;
int visit[100001] = { 0, };
void find(int x, int _length)
{
	visit[x] = 1;
	for (auto u : node[x])
	{
		if (visit[u.first]) continue;
		find(u.first, _length + u.second);
	}
	if (maxLength < _length)
	{
		maxLengthNode = x;
		maxLength = _length;
	}
}

int main()
{
	int result = 0;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		int num;

		scanf("%d", &num);
		while (true)
		{
			int b, w;
			scanf("%d", &b);
			if (b == -1) break;
			scanf("%d", &w);
			node[num].push_back({ b,w });
		}
	}

	find(1, 0);
	maxLength = 0;
	std::fill(visit, visit + 100001, 0);
	find(maxLengthNode, 0);

	printf("%d", maxLength);
}