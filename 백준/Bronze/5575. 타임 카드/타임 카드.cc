#include <iostream>
#include <algorithm>

using namespace std;

void getTime(int ha, int ma, int sa, int hb, int mb, int sb)
{
	int h, m, s;
	h = hb - ha;
	m = mb - ma;
	s = sb - sa;
	if (s < 0)
	{
		s += 60;
		m -= 1;
	}
	if (m < 0)
	{
		m += 60;
		h -= 1;
	}
	cout << h << " " << m << " " << s << "\n";
}
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int ha, ma, sa, hb, mb, sb;
	for (int i = 0; i < 3; i++)
	{
		cin >> ha >> ma >> sa >> hb >> mb >> sb;
		getTime(ha, ma, sa, hb, mb, sb);
	}

	return 0;
}