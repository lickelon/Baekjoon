#include <iostream>
#include <string>

using std::string;
using std::cin;

int main()
{
	std::ios::sync_with_stdio(0);
	cin.tie(0);

	string A, B, result;
	int N;
	cin >> N;
	for (int j = 0; j < N; j++)
	{
		int count1 = 0, count0 = 0;

		cin >> A >> B;

		for (int i = 0; i < A.length(); i++)
		{
			if (A[i] != B[i]) A[i] == '0' ? count0++ : count1++;
		}
		printf("%d\n", (count0 > count1) ? count0 : count1);
	}
}