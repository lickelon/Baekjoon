#include <iostream>
#include <queue>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	
	priority_queue<int> pq;

	while (n > 0) {
		pq.push(n % 10);
		n /= 10;
	}

	while (!pq.empty()) {
		cout << pq.top();
		pq.pop();
	}
	
	cout << "\n";

	return 0;
}