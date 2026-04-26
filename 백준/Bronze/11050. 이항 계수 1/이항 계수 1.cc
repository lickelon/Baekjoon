#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;

    cin >> n >> k;

    k = min(k, n-k);

    int ans = 1;

    for(int i = 0; i < k; i++)
    {
        ans *= n - i;
    }

    for(int i = 1; i <= k; i++)
    {
        ans /= i;
    }

    cout << ans;

    return 0;
}