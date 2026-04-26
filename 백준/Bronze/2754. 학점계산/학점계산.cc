#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	string s;
	cin >> s;
	if (s.length() == 1 && s[0] == 'F') {
		cout << "0.0";
		return 0;
	}
	float ans = 0;

	ans = 3.7 - (s[0] - 'A');
	switch (s[1]) {
	case '+':
		ans += 0.3;
	case '0':
		ans += 0.3;
	case '-':
		break;
	}
	printf("%.1f", ans);
}