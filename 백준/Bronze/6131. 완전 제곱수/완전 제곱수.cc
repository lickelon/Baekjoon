#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

ll gcd(ll a, ll b)
{
    if (!b)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= 500; i++)
    {
        for (int j = i; j <= 500; j++)
        {
            if (j * j - i * i == n)
                ans++;
        }
    }

    cout << ans;

    return 0;
}