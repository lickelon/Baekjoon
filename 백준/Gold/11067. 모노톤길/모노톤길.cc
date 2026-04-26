#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <deque>
#include <map>
#include <cstring>

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

bool compare1(pii& a, pii& b)
{
	if (a.first == b.first)
	{
		return a.second < b.second;
	}
	return a.first < b.first;
}

bool compare2(pii& a, pii& b)
{
	if (a.first == b.first)
	{
		return a.second > b.second;
	}
	return a.first < b.first;
}

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);

	int T;
	cin >> T;
	while (T--)
	{
		pii arr[100000];
		int cntx[100000] = {};
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i].first >> arr[i].second;
			cntx[arr[i].first]++;
		}
		sort(arr, arr + n, compare1);

		int beforeY = 0;
		int idx = 0;
		while (idx < n)
		{
			if (arr[idx].second != beforeY)
			{
				sort(arr + idx, arr + idx + cntx[arr[idx].first], compare2);
			}
			idx += cntx[arr[idx].first];
			beforeY = arr[idx - 1].second;
		}

		int m, input;
		cin >> m;
		for (int i = 0; i < m; i++)
		{
			cin >> input;
			cout << arr[input - 1].first << " " << arr[input - 1].second << "\n";
		}
	}

	return 0;
}