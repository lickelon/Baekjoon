#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int arr[201] = {};
	int n;
	cin >> n;
	while (n--) {
		int temp;
		cin >> temp;
		arr[temp + 100] += 1;
	}
	int k;
	cin >> k;
	cout << arr[k + 100];
}