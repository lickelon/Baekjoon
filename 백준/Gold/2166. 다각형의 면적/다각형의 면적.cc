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
	cout << fixed;
	cout.precision(1);
	int N;

	cin >> N;
	vector<pll> _v(N);

	for (int i = 0; i < N; i++) {
		cin >> _v[i].first >> _v[i].second;
	}

	ll ans = 0;
	for (int i = 0; i < N - 1; i++) {
		ans += _v[i].first * _v[i + 1].second - _v[i].second * _v[i + 1].first;
	}
	ans += _v[N - 1].first * _v[0].second - _v[N - 1].second * _v[0].first;
	if (ans < 0) ans = -ans;
	cout << (double)ans * 0.5;


	return 0;
}