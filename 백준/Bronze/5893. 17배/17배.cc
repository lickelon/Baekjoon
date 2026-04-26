#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	char ans[1010];

	cin >> ans;

	int size = strlen(ans);

	for (int i = 0; i < 4; i++)
	{
		ans[size + i] = '0';
	}
	ans[size + 4] = 0;
	int c = 0;
	for (int i = 0; i < size; i++)
	{
		int a, b;
		a = ans[size + 3 - i] - '0';
		b = ans[size - 1 - i] - '0';
		switch (a + b + c)
		{
		case 0:
			ans[size + 3 - i] = '0';
			c = 0;
			break;
		case 1:
			ans[size + 3 - i] = '1';
			c = 0;
			break;
		case 2:
			ans[size + 3 - i] = '0';
			c = 1;
			break;
		case 3:
			ans[size + 3 - i] = '1';
			c = 1;
			break;
		}
	}
	for (int i = 3; i >= 0; i--)
	{
		int a;
		a = ans[i] - '0';
		switch (a + c)
		{
		case 0:
			ans[i] = '0';
			c = 0;
			break;
		case 1:
			ans[i] = '1';
			c = 0;
			break;
		case 2:
			ans[i] = '0';
			c = 1;
			break;
		}
	}
	if (c == 1) cout << "1";
	cout << ans;
	return 0;
}