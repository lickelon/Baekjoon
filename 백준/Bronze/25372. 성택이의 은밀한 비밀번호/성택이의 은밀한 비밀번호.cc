#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		if (s.length() > 9 || s.length() < 6) {
			cout << "no\n";
		}
		else cout << "yes\n";
	}
}