#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

bool arr[1001][1001];
int n;

void reverse(int k) {
	for (int i = 1; i <= n; i++) {
		arr[i][k] = !arr[i][k];
		arr[k][i] = !arr[k][i];
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	cin >> n;
	
	for (int i = 1; i <= n; i++) {
		arr[i][i] = 1;
	}

	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}

	for (int i = 2; i <= n; i++) {
		if (arr[1][i] == 0) {
			reverse(i);
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (arr[i][j] == 0) {
				cout << "NE\n";
				return 0;
			}
		}
	}

	cout << "DA\n";
	return 0;
}