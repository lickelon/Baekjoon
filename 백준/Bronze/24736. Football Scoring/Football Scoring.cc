#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int T = 2;
	while (T--) {
		int a, b, c, d, e;
		cin >> a >> b >> c >> d >> e;
		cout << a * 6 + b * 3 + c * 2 + d + e * 2 << " ";
	}
	return 0;
}