#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int input, S = 0, T = 0;

	for (int j = 0; j < 4; j++)
	{
		cin >> input;
		S += input;
	}
	for (int j = 0; j < 4; j++)
	{
		cin >> input;
		T += input;
	}

	cout << (S > T ? S : T);

	return 0;
}