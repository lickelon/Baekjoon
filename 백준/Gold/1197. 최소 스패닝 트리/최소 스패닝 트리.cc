#include <cstdio>
#include <algorithm>

int tree[10001];
int size[10001];

struct edge{int first;int second;int weight;};

edge EDGE[100000];

bool check(const edge &A, const edge &B)
{
	return A.weight < B.weight;
}

int find(int a)
{
	while (a != tree[a]) a = tree[a];
	return a;
}

bool unite(int a, int b)
{
	a = find(a);
	b = find(b);

	if (a != b)
	{
		if (size[a] < size[b]) std::swap(a, b);
		size[a] += size[b];
		tree[b] = a;
		return true;
	}
	return false;
}

int main()
{
	int V, E;
	int result = 0;

	scanf("%d %d", &V, &E);

	for (int i = 1; i <= V; i++)
	{
		tree[i] = i;
		size[i] = 1;
	}

	for (int i = 0; i < E; i++)
	{
		scanf("%d %d %d", &EDGE[i].first, &EDGE[i].second, &EDGE[i].weight);
	}
	std::sort(EDGE, EDGE + E, check);

	for (int i = 0; i < E; i++)
	{
		if (unite(EDGE[i].first, EDGE[i].second)) result += EDGE[i].weight;
	}
	printf("%d", result);
}