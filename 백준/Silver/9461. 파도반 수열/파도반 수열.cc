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
	
	ll arr[101];

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;

	for (int i = 3; i <= 100; i++) {
		arr[i] = arr[i - 2] + arr[i - 3];
	}

	int T;
	cin >> T;
	while (T--) {
		int N;
		cin >> N;
		cout << arr[N] << "\n";
	}

	return 0;
}