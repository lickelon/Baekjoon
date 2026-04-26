#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int L, A, B, C, D;
	int ans = 0;

	cin >> L >> A >> B >> C >> D;
	
	ans = max(ans, A / C + !!(A % C));
	ans = max(ans, B / D + !!(B % D));

	cout << L - ans;

	return 0;
}