#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	priority_queue<int> _pq;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		_pq.push(temp);
	}

	int ans = 0;
	while (_pq.size() > 1) {
		int a, b;
		a = _pq.top(); _pq.pop();
		b = _pq.top(); _pq.pop();

		ans += a * b;
		_pq.push(a + b);
	}

	cout << ans;

	return 0;
}