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

int arr[500];
int dp[501][501];

int solve(int begin, int end)
{
	if (dp[begin][end] == 0)
	{
		if (end - begin == 1)
		{

		}
		/*else if (end - begin == 2)
		{
			dp[begin][end] = arr[begin] + arr[end + 1];
		}*/
		else
		{
			int m = 0x7FFFFFFF;
			for (int i = begin + 1; i < end; i++)
			{
				m = min(m, solve(begin, i) + solve(i, end));
			}
			int sum = 0;
			for (int i = begin; i < end; i++)
			{
				sum += arr[i];
			}
			dp[begin][end] = sum + m;
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
		int K;
		cin >> K;
		for (int i = 0; i < K; i++)
		{
			cin >> arr[i];
		}
		memset(dp, 0, sizeof(dp));
		
		int ans = solve(0, K);
		cout << ans << "\n";
	}

	return 0;
}