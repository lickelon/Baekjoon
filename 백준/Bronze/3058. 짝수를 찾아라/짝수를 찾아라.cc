#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int input, sum = 0, m = 0x7FFFFFFF;
		for (int i = 0; i < 7; i++)
		{
			cin >> input;

			if (input % 2 == 0)
			{
				sum += input;
				m = min(m, input);
			}
		}
		cout << sum << " " << m << "\n";
	}
}