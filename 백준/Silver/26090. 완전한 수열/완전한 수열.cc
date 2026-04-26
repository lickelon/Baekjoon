#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <string>
using namespace std;
using ll = long long;

bool prime[1000001];

int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios::sync_with_stdio(NULL);

	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	fill(prime, prime + 1000001, 1);
	prime[0] = 0;
	prime[1] = 0;
	for (int i = 2; i < 1000001; i++) {
		if (prime[i]) {
			for (int j = i * 2; j < 1000001; j+=i) {
				prime[j] = 0;
			}
		}
	}
	int ans = 0;
	for (int i = 0; i <= n; i++) {
		if (!prime[i]) continue;
		int sum = 0;
		for (int j = 0; j < i; j++) {
			sum += arr[j];
		}
		if (prime[sum]) ans++;
		for (int j = i; j < n; j++) {
			sum -= arr[j - i];
			sum += arr[j];
			if (prime[sum]) ans++;
		}
	}
	cout << ans;
}