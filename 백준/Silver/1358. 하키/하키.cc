#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
int w, h, x, y, p;

int check(int px, int py)
{
	int r = h * 0.5;
	//check c1
	int cx = x;
	int cy = y + r;
	int dist = (px - cx) * (px - cx) + (py - cy) * (py - cy);
	if (dist <= r * r) return 1;

	//check c2
	cx = x + w;
	cy = y + r;
	dist = (px - cx) * (px - cx) + (py - cy) * (py - cy);
	if (dist <= r * r) return 1;

	//check rec
	if ((x <= px && px <= x + w) && (y <= py && py <= y + h)) return 1;
	
	return 0;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	cin >> w >> h >> x >> y >> p;

	int ans = 0;
	for (int i = 0; i < p; i++) {
		int px, py;
		cin >> px >> py;
		if (check(px, py)) ans++;
	}

	cout << ans;

	return 0;
}