#include <iostream>
#include <string>

using std::string;
using std::cin;

int main()
{
	std::ios::sync_with_stdio(0);
	cin.tie(0);

	string num;

	int T;
	cin >> T;

	for (int j = 0; j < T; j++)
	{
		int base, result = 0;
		cin >> base >> num;
		for (int i = 0; i < num.length(); i++)
		{
			result += num[i] - '0';
			result %= base - 1;
		}
		printf("%d\n", result);
	}
}