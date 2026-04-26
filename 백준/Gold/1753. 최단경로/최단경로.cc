#define INF 0x7FFFFFFF

#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>

std::priority_queue<std::pair<int, int>> q;
std::vector<std::pair<int, int>> adj[20001];

int distance[20001];
int processed[20001] = { 0, };

int main()
{
	int V, E, K;
	//init
	scanf("%d %d", &V, &E);
	scanf("%d", &K);

	for (int i = 0; i < E; i++)
	{
		int a, b, x;
		scanf("%d %d %d", &a, &b, &x);

		adj[a].push_back({ b,x });
	}

	std::fill(distance, distance + 20001, INF);

	//process
	distance[K] = 0;

	q.push({ 0,K });
	while (!q.empty())
	{
		int a = q.top().second; q.pop();
		if (processed[a]) continue;
		processed[a] = true;

		for (auto u : adj[a])
		{
			int b = u.first, w = u.second;
			if (distance[a] + w < distance[b])
			{
				distance[b] = distance[a] + w;
				q.push({ -distance[b], b });
			}
		}
	}

	for (int i = 1; i <= V; i++)
	{
		if (distance[i] == INF) printf("INF\n");
		else printf("%d\n", distance[i]);
	}
}