#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int check[10];

void calc(int n, int ten, vector<int> &arr)
{
	while (n > 0) {
		arr[n % 10] += ten;
		n /= 10;
	}
}

void solve(int A, int B, int ten, vector<int> &arr) {
	while (A % 10 != 0 && A <= B)
	{
		calc(A, ten, arr);
		A++;
	}
	if (A > B) return;
	while (B % 10 != 9 && B >= A)
	{
		calc(B, ten, arr);
		B--;
	}

	int cnt = (B / 10 - A / 10 + 1);
	for (int i = 0; i < 10; ++i)
		arr[i] += cnt * ten;

	solve(A / 10, B / 10, ten * 10, arr);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    while(true) {
        int a, b;
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        vector<int> arr(10);
        solve(a, b, 1, arr);
        for(auto u : arr) cout << u << " ";
        cout << "\n";
    }
    

    return 0;
}