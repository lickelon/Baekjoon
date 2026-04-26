#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

vector<int> getNumOnNot(int num, int notation)
{
	vector<int> numOnNot;
	while (num != 0)
	{
		numOnNot.push_back(num % notation);
		num /= notation;
	}
	return numOnNot;
}
bool checkPalindrome(vector<int> numOnNot)
{
	for (int i = 0; i < numOnNot.size(); i++)
	{
		if (numOnNot[i] != numOnNot[numOnNot.size() - 1 - i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);

	int T;
	cin >> T;
	while (T--)
	{
		int num;
		cin >> num;

		int ans = 0;
		for (int i = 2; i <= 64; i++)
		{
			ans |= (int)checkPalindrome(getNumOnNot(num, i));
		}
		cout << ans << "\n";
	}

	return 0;
}