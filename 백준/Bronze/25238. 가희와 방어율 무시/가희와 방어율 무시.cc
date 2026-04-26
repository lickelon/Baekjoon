#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a * (100 - b) >= 10000) cout << 0;
	else cout << 1;
}