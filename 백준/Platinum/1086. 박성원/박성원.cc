#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

#define loop(x) for (int i = 0; i < x; i++)

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

ll dp[1 << 15][101];
string num[15];
int a[15], l[15], r[51];
int n, k;

ll gcd(ll x, ll y)
{
    if (y == 0)
        return x;
    return gcd(y, x % y);
}

ll solve(int used, int m)
{
	if (used == (1 << n) - 1) return m == 0;

	ll &ret = dp[used][m];
	if (ret != -1)return ret;
	ret = 0;
	for (int i = 0; i < n; i++)
	{
		if (used & (1 << i)) continue;
		
		int mod = (r[l[i]] * m + a[i]) % k;
		ret += solve(used | (1 << i), mod);
	}
	return ret;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        l[i] = num[i].size();
    }

    cin >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < l[i]; j++)
            a[i] = (a[i] * 10 + (num[i][j] - '0')) % k;

    r[0] = 1;
    for (int i = 1; i <= 50; i++)
        r[i] = (r[i - 1] * 10) % k;

    fill(&dp[0][0], &dp[(1 << 15) - 1][100], -1);
    ll t1 = solve(0, 0);

    ll t2 = 1;
    for (ll i = 1; i <= n; i++)
        t2 *= i;
    
    ll g = gcd(t1, t2);

    cout << t1 / g << '/' << t2 / g << '\n';
}