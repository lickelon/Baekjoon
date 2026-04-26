#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <map>
#include <set>
#include <string>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

ll gcd(ll a, ll b)
{
	if (!b) return a;
	return gcd(b, a % b);
}

struct _data {
	int cost;
	int start;
	int end;
};

_data e[300000];
int room[200001];
priority_queue<pair<int, pii>> pq;

bool compare(_data& a, _data& b)
{
	return a.cost < b.cost;
}

int find(int a)
{
	if (room[a] == 0) return a;
	return find(room[a]);
}

void _union(int a, int b)
{
	if (room[a] != 0) room[a] = find(a);
	if (room[b] != 0) room[b] = find(b);
	room[find(a)] = find(b);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N, M;
	cin >> N >> M;
	_data d;
	for (int i = 0; i < M; i++)
	{
		cin >> d.start >> d.end >> d.cost;
		pq.push({ -d.cost,{d.start,d.end} });
	}
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;
		d.start = 0;
		d.end = i + 1;
		d.cost = input;
		pq.push({ -d.cost,{d.start,d.end} });
	}

	ll ans = 0;

	for (int i = 0; i < N + M; i++)
	{
		d.cost = -pq.top().first;
		d.start = pq.top().second.first;
		d.end = pq.top().second.second;
		pq.pop();
		if (find(d.start) == find(d.end))
		{
			continue;
		}
		ans += d.cost;
		_union(d.start, d.end);
	}

	cout << ans;

	return 0;
}
