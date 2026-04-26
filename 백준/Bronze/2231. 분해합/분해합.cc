#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;

	cin >> n;
	
	for (int k = max(1, n - 70); k <= n; k++)
	{
		int s, t;
		s = t = k;

		while (t > 0) {
			s += t % 10;
			t /= 10;
		}
		if (s == n) {
			cout << k << "\n";
			return 0;
		}
	}

	cout << "0\n";
	return 0;
}