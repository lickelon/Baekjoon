#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int arr[100001][3] = {};
int input[100001][2];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T;
	cin >> T;
	while (T--) {
		int n;
		cin >> n;
		fill(&arr[0][0], &arr[100000][3], 0);
		for (int i = 1; i <= n; i++) {
			cin >> input[i][0];
		}
		for (int i = 1; i <= n; i++) {
			cin >> input[i][1];
		}
		for (int i = 1; i <= n; i++) {
			arr[i][0] = max({ arr[i - 1][0], arr[i - 1][1], arr[i - 1][2] });
			arr[i][1] = max({ arr[i - 1][0] + input[i][0], arr[i - 1][2] + input[i][0] });
			arr[i][2] = max({ arr[i - 1][0] + input[i][1], arr[i - 1][1] + input[i][1] });
		}
		cout << max({ arr[n][0], arr[n][1], arr[n][2] }) << "\n";
	}

	return 0;
}