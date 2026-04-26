#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <string>
using namespace std;
using ll = long long;
int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios::sync_with_stdio(NULL);

	int n;
	string s;

	cin >> s;
	ll arr[3] = {};
	cin >> n;

	vector<string> hs(n);

	for (int i = 0; i < n; i++) {
		cin >> hs[i];
		for (int j = 0; j < 3; j++) {
			if (hs[i][0] == s[j]) {
				arr[j]++;
			}
		}
	}

	if (s[0] != s[1] && s[0] != s[2] && s[1] != s[2]) {
		cout << arr[0] * arr[1] * arr[2];
	}
	else if (s[0] == s[1] && s[1] != s[2]) {
		ll ans = arr[0] * (arr[0] - 1) * arr[2];
		ans /= 2;
		cout << ans;
	}
	else if (s[0] == s[2] && s[0] != s[1]) {
		ll ans = arr[0] * (arr[0] - 1) * arr[1];
		ans /= 2;
		cout << ans;
	}
	else if (s[1] == s[2] && s[0] != s[1]) {
		ll ans = arr[1] * (arr[1] - 1) * arr[0];
		ans /= 2;
		cout << ans;
	}
	else if (s[0] == s[1] && s[0] == s[2]) {
		ll ans = arr[0] * (arr[0] - 1) * (arr[0] - 2);
		ans /= 6;
		cout << ans;
	}
}