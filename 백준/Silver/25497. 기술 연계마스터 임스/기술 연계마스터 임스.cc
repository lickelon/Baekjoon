#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	int l = 0, s = 0;
	int ans = 0;

	for (auto u : str) {
		switch (u) {
		case 'L':
			l++;
			break;
		case 'R':
			if (l) {
				ans++;
				l--;
			}
			else {
				cout << ans;
				return 0;
			}
			break;
		case 'S':
			s++;
			break;
		case 'K':
			if (s) {
				ans++;
				s--;
			}
			else {
				cout << ans;
				return 0;
			}
			break;
		default:
			ans++;
		}
	}
	cout << ans;
	return 0;
}