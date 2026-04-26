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

	ll N;

	ll arr[100000];
	cin >> N;
	ll ans = 0;
	ll cnt = 0;
	ll sum = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	for (int i = N - 1; i >= 0; i--)
	{
		if ((sum + arr[i]) * (cnt + 1) >= sum * cnt + arr[i])
		{
			sum += arr[i];
			cnt++;
		}
		else
		{
			ans += arr[i];
		}
	}

	ans += sum * cnt;
	cout << ans;

	return 0;
}