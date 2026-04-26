#include <iostream>
#include <algorithm>
#include <cmath>
#include <stack>

using namespace std;

int main()
{
	stack<int> st;

	int k;
	cin >> k;

	for (int i = 0; i < k; i++) {
		int input;
		cin >> input;

		if (input == 0) st.pop();
		else st.push(input);
	}

	int ans = 0;
	while (!st.empty()) {
		ans += st.top();
		st.pop();
	}
	cout << ans;
}