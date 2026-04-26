#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <list>

#define MAX 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int main()
{
	cin.tie(0); cout.tie(0);
	ios::sync_with_stdio(0);

	cout << fixed;
	cout.precision(8);

	ld a, d, k;

	cin >> a >> d >> k;
	d /= 100;
	k /= 100;
	ld current = 1, before = 1;
	current = d;
	ld sum = a;
	ld ans = 0;
	do
	{
		ans += sum * current * before;
		before *= 1 - current;
		current = current * (1 + k);
		sum += a;
	} while (current < 1);
	current = 1;
	ans += sum * current * before;
	cout << ans << "\n";

	return 0;
}