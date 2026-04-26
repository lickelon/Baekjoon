#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

using pii = pair<int, int>;

int arr[1000000];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	cin >> n;
	
	vector<pii> _v(n);

	for (int i = 0; i < n; i++) {
		cin >> _v[i].first;
		_v[i].second = i;
	}

	sort(_v.begin(), _v.end());

	for (int i = 1; i < n; i++) {
		if (_v[i].first == _v[i - 1].first) arr[_v[i].second] = arr[_v[i - 1].second];
		else arr[_v[i].second] = arr[_v[i - 1].second] + 1;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
	return 0;
}