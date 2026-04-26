#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <string>
using namespace std;
using ll = long long;
int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios::sync_with_stdio(NULL);

	int n, m;
	cin >> n >> m;

	int p1, p2;

	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	p1 = 0;
	p2 = n - 1;
	int ans = 0;
	sort(arr.begin(), arr.end());
	while (p1 < p2) {
		if (arr[p1] + arr[p2] >= m) {
			ans += 1;
			p1 += 1;
			p2 -= 1;
		}
		else {
			p1 += 1;
		}
	}
	cout << ans;
}