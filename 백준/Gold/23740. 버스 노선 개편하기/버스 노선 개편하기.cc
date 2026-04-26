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
	int start;
	int end;
	int cost;
};

_data bus[200000];

bool compare(_data& a, _data& b)
{
	return a.start < b.start;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int N;

	cin >> N;
	vector<_data> ans;
	for (int i = 0; i < N; i++)
	{
		cin >> bus[i].start >> bus[i].end >> bus[i].cost;
	}

	sort(bus, bus + N, compare);

	int cstart = bus[0].start, cend = bus[0].end, ccost = bus[0].cost;
	for (int i = 1; i < N; i++)
	{
		if (bus[i].start <= cend)
		{
			ccost = min(ccost, bus[i].cost);
			cend = max(cend, bus[i].end);
		}
		else
		{
			ans.push_back({ cstart, cend, ccost });
			cstart = bus[i].start;
			cend = bus[i].end;
			ccost = bus[i].cost;
		}
	}
	ans.push_back({ cstart, cend, ccost });

	cout << ans.size() << "\n";
	for (auto u : ans)
	{
		cout << u.start << " " << u.end << " " << u.cost << "\n";
	}
	return 0;
}
