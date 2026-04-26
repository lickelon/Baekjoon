#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b) {
		cout << b / (a + 1) << "\n";
	}
}