#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int k;
	cin >> k;
	deque<pii> input;

	for (int i = 0; i < 6; i++)
	{
		int a, b;
		cin >> a >> b;
		input.push_back({ a,b });
	}

	int cnt[4] = {};
	for (auto u : input) {
		cnt[u.first - 1]++;
	}
	while (cnt[input[0].first - 1] != 1 || cnt[input[1].first - 1] != 1) {
		pii a = input[0];
		input.pop_front();
		input.push_back(a);
	}

	cout << (input[0].second * input[1].second - input[3].second * input[4].second) * k;

	return 0;
}