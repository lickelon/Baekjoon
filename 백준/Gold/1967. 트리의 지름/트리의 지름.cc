#include <cstdio>
#include <algorithm>
#include <vector>

std::vector<std::pair<int, int>> node[10001]; //second, weight
int maxLengthNode, maxLength = 0, N;
int visit[10001] = { 0, };
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

	for (int i = 1; i < N; i++)
	{
		int a, b, w;
		scanf("%d %d %d", &a, &b, &w);

		node[a].push_back({ b,w });
		node[b].push_back({ a,w });
	}

	find(1, 0);
	maxLength = 0;
	std::fill(visit, visit + 10001, 0);
	find(maxLengthNode, 0);

	printf("%d", maxLength);
}