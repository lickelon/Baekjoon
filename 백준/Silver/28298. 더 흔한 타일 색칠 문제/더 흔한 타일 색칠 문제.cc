#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

int arr[500][500];
int tile[500][500];

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	int k;
	cin >> k;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			arr[i][j] = s[j] - 'A';
		}
	}

	int ans = 0;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < k; j++) {
			int temp[26] = {};
			for (int x = 0; x < n; x += k) {
				for (int y = 0; y < m; y += k) {
					temp[arr[i + x][j + y]]++;
				}
			}
			int M = 0;
			int Mvalue = -1;
			int sum = 0;
			for (int i = 0; i < 26; i++) {
				if (temp[i] > M) {
					M = temp[i];
					Mvalue = i;
				}
				sum += temp[i];
			}
			tile[i][j] = Mvalue;
			ans += sum - M;
		}
	}

	cout << ans << "\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << (char)(tile[i%k][j%k]+'A');
		}
		cout << "\n";
	}

	return 0;
}