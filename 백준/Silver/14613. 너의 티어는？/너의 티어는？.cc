#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

using ld = long double;
using ll = long long int;

ld tier[5];
ld W, L, D;

ll factorial(int a)
{
	ll result = 1;

	while (a)
	{
		result *= a--;
	}
	return result;
}

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	cin >> W >> L >> D;

	for (int i = 0; i <= 20; i++)
	{
		for (int j = 0; j <= 20 - i; j++)
		{
			tier[(i * 50 - j * 50 + 1000) / 500] += powl(W, i) * powl(L, j) * powl(D, 20 - i - j) * ld(factorial(20) / factorial(i) / factorial(j) / factorial(20 - i - j));
		}
	}

	cout << fixed;
	cout.precision(8);
	for (int i = 0; i < 5; i++)
	{
		cout << tier[i] << endl;
	}
}