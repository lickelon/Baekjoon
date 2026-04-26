#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[2];
	cin >> a[0];
	for (int i = 1; i < n; i++) cin >> a[1];
	n -= 3;
	sort(a, a + 2);
	int g = a[1] - a[0];
	if (g > n) {
		a[1] -= n;
		cout << a[1] - 1;
	}
	else {
		n -= g;
		a[1] -= g;
		cout << a[1] - 1 - n / 2;
	}
	return 0;
}