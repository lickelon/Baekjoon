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

int dp[1001][1001];
int arr[1001];

int N;

int solve(int begin, int end)
{
	if (dp[begin][end] == 0)
	{
		int turn = (N - (end - begin)) % 2;
		if (end == begin) return turn * arr[begin];
		if (turn)
		{
			dp[begin][end] = max(solve(begin, end - 1) + arr[end], solve(begin + 1, end) + arr[begin]);
		}
		else
		{
			dp[begin][end] = min(solve(begin, end - 1), solve(begin + 1, end));
		}
	}
	return dp[begin][end];
}


int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);

	int T;
	cin >> T;
	while (T--)
	{
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> arr[i];
		}
		memset(dp, 0, sizeof(dp));

		cout << solve(0, N - 1) << "\n";
	}

	return 0;
}