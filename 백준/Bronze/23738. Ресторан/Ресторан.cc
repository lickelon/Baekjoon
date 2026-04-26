#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <map>
#include <set>
#include <string>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

ll gcd(ll a, ll b)
{
	if (!b) return a;
	return gcd(b, a % b);
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string S;

	cin >> S;

	for (auto u : S)
	{
		switch (u)
		{
		case 'B':
			cout << "v";
			break;
		case 'E':
			cout << "ye";
			break;
		case 'H':
			cout << "n";
			break;
		case 'P':
			cout << "r";
			break;
		case 'C':
			cout << "s";
			break;
		case 'Y':
			cout << "u";
			break;
		case 'X':
			cout << "h";
			break;
		default:
			cout << (char)(u + 32);
			break;
		}
	}

	return 0;
}
