#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <list>

#define MAX 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

deque<ll> arr;
ll dp[300000][2];

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);

	int n;

	cin >> n;

	string s;
	cin >> s;

	ll input;
	ll cmax;
	char curr = s[0];
	cin >> input;
	cmax = input;
	for (int i = 1; i < n; i++)
	{
		cin >> input;
		if (s[i] == curr)
		{
			cmax = max(input, cmax);
		}
		else
		{
			arr.push_back(cmax);
			curr = s[i];
			cmax = input;
		}
	}
	if (arr.size() < 2)
	{
		cout << 0 << "\n";
		return 0;
	}

	arr.pop_front();

	int size = arr.size();

	sort(arr.rbegin(), arr.rend());

	ll sum = 0;
	for (int i = 0; i < (size + 1) / 2; i++)
	{
		sum += arr[i];
	}

	cout << sum << "\n";

	return 0;
}