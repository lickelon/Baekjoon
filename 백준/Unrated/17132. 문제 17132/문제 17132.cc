#include <cstdio>
#include <algorithm>

int tree[100001];
long long size[100001];
long long result;

struct edge{int first;int second;int weight;};

edge EDGE[100000];

bool check(const edge &A, const edge &B)
{
	return A.weight > B.weight;
}

int find(int a)
{
	while (a != tree[a]) a = tree[a];
	return a;
}

void unite(int a, int b, int w)
{
	a = find(a);
	b = find(b);

	if (a != b)
	{
		if (size[a] < size[b]) std::swap(a, b);
		result += size[a] * size[b] * w;
		size[a] += size[b];
		tree[b] = a;
	}
}

int main()
{
	int V;

	scanf("%d", &V);

	for (int i = 1; i <= V; i++)
	{
		tree[i] = i;
		size[i] = 1;
	}

	for (int i = 0; i < V - 1; i++)
	{
		scanf("%d %d %d", &EDGE[i].first, &EDGE[i].second, &EDGE[i].weight);
	}
	std::sort(EDGE, EDGE + V - 1, check);

	for (int i = 0; i < V - 1; i++)
	{
		unite(EDGE[i].first, EDGE[i].second, EDGE[i].weight);
	}
	printf("%lld", result);
}