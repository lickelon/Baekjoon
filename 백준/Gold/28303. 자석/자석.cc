#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int arr[500][500];
int tile[500][500];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k;
	cin >> n >> k;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	//ns
	int M1 = -INF;
	vector<int> prefix_sum(n);
	int m = 0;
	for (int i = 1; i < n; i++) {
		prefix_sum[i] = arr[i - 1] - arr[i] - k;
		prefix_sum[i] += prefix_sum[i - 1];
		M1 = max(M1, prefix_sum[i] - m);
		m = min(m, prefix_sum[i]);
	}

	int M2 = -INF;
	prefix_sum.clear();
	prefix_sum.resize(n);
	m = 0;
	for (int i = 1; i < n; i++) {
		prefix_sum[i] = arr[n - (i - 1) - 1] - arr[n - i - 1] - k;
		prefix_sum[i] += prefix_sum[i - 1];
		M2 = max(M2, prefix_sum[i] - m);
		m = min(m, prefix_sum[i]);
	}

	cout << max(M1, M2);

	return 0;
}