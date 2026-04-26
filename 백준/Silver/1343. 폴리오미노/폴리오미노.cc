#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main()
{
	int arr[50];
	string S;
	cin >> S;
	string ans ="";
	int s_length = 0;
	for (int i = 0; i < S.length(); i++) {
		if (S[i] == 'X') {
			s_length++;
		}
		else {
			if (s_length % 2) {
				cout << "-1\n";
				return 0;
			}
			s_length /= 2;
			while (s_length > 1) {
				ans += "AAAA";
				s_length -= 2;
			}
			if (s_length == 1) {
				ans += "BB";
			}
			ans += ".";
			s_length = 0;
		}
	}
	if (s_length % 2) {
		cout << "-1\n";
		return 0;
	}
	s_length /= 2;
	while (s_length > 1) {
		ans += "AAAA";
		s_length -= 2;
	}
	if (s_length == 1) {
		ans += "BB";
	}
	cout << ans;
	return 0;
}