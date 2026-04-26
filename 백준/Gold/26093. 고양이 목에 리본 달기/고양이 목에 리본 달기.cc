#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <string>
using namespace std;
using ll = long long;

ll dp[101][10000];
ll input[101][10000];
pair<ll,int> mm[101][10000]; //{max value, max num} , second max

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios::sync_with_stdio(NULL);

	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> input[i][j];
		}
	}
	mm[0][0] = { 0, -1 };
	mm[0][1] = { 0, -1 };
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < m; j++) {
			int k = m-1;
			while (mm[i - 1][k].second == j) {
				k--;
			}
			dp[i][j] = mm[i - 1][k].first + input[i][j];
			mm[i][j] = { dp[i][j], j };
		}
		sort(&mm[i][0], &mm[i][m]);

	}
	cout << mm[n][m-1].first;
}