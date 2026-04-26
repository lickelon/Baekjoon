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

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, ans = 0;

	cin >> n;

	int arr[100];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int t = 30;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] <= t * 2)
		{
			ans++;
		}

		t -= arr[i];
		if (t <= 0) t = 30;
	}
	cout << ans;
	return 0;
}
