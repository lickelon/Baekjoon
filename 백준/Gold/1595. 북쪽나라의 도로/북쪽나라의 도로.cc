#include <cstdio>
#include <algorithm>
#include <vector>

std::vector<std::pair<int, int>> node[10001]; //second, weight
int maxLengthNode, maxLength = 0, N = 0;
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
	int a, b, w;
	while (~scanf("%d %d %d", &a, &b, &w))
	{
		node[a].push_back({ b,w });
		node[b].push_back({ a,w });
		N++;
	}

	find(1, 0);
	maxLength = 0;
	std::fill(visit, visit + N + 2, 0);
	find(maxLengthNode, 0);

	printf("%d", maxLength);
}