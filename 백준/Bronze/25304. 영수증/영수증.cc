#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int X;
	cin >> X;
	int n;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		X -= a * b;
	}

	if (X) cout << "No";
	else cout << "Yes";
}