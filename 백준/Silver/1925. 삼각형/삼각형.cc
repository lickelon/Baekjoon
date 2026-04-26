#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int x1, x2, x3;
	int y1, y2, y3;

	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	if ((x2 - x1) * (y3 - y1) == (x3 - x1) * (y2 - y1)) {
		cout << "X";
		return 0;
	}
	int length[3];
	length[0] = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
	length[1] = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
	length[2] = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);

	sort(length, length + 3);

	int angle[3];
	angle[0] = (x3 - x1) * (x2 - x1) + (y3 - y1) * (y2 - y1);
	angle[1] = (x3 - x2) * (x1 - x2) + (y3 - y2) * (y1 - y2);
	angle[2] = (x1 - x3) * (x2 - x3) + (y1 - y3) * (y2 - y3);

	sort(angle, angle + 3);

	if (length[0] == length[2]) {
		cout << "JungTriangle";
	}
	else if (length[0] == length[1] || length[1] == length[2]) {
		if (angle[0] < 0) cout << "Dunkak2Triangle";
		else if (angle[0] == 0) cout << "Jikkak2Triangle";
		else cout << "Yeahkak2Triangle";
	}
	else {
		if (angle[0] < 0) cout << "DunkakTriangle";
		else if (angle[0] == 0) cout << "JikkakTriangle";
		else cout << "YeahkakTriangle";
	}

	return 0;
}