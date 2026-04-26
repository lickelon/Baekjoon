#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <string>
using namespace std;
using ll = long long;

vector<ll> factors(ll num)
{
	vector<ll> divs;
	for (ll i = 2; i * i <= num; i++) {
		while (num % i == 0) {
			divs.push_back(i);
			num /= i;
		}
	}
	if (num != 1) divs.push_back(num);
	return divs;
}
int main()
{
	cin.tie(NULL); cout.tie(NULL);
	ios::sync_with_stdio(NULL);

	ll a, b;
	cin >> a >> b;
	vector<ll> va, vb;
	va = factors(a);
	vb = factors(b);

	int pa = 0;
	int pb = 0;

	while (a != b) {
		if (a > b) {
			a /= va[pa];
			pa++;
		}
		else {
			b /= vb[pb];
			pb++;
		}
	}
	cout << a;
}