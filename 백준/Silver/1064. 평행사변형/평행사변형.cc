#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
	cout.precision(10);
	cout << fixed;
	int a, b, c, d, e, f;

	cin >> a >> b >> c >> d >> e >> f;

	//a c e a
	//b d f b

	if ((c-a) * (f-b) == (e-a) * (d-b)) {
		cout << -1;
		return 0;
	}
	int arr[3];
	arr[0] = (a - c) * (a - c) + (b - d) * (b - d);
	arr[1] = (a - e) * (a - e) + (b - f) * (b - f);
	arr[2] = (e - c) * (e - c) + (f - d) * (f - d);
	sort(arr, arr + 3);
	cout << (sqrt(arr[2]) - sqrt(arr[0])) * 2;
}