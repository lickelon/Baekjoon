#include <bits/stdc++.h>
#include <random>
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

ll hate[7] = {11,
              111,
              11111,
              1111111,
              11111111111,
              1111111111111,
              11111111111111111};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    cin >> n;
    int idx = 0;

    ll ans = 0;
    for (int i = 1; i < 128; i++)
    {
        int temp = i;
        idx = 0;
        ll div = 1;
        bool imp = false;
        int as = -1;
        while (temp > 0 && !imp)
        {
            if (temp % 2)
            {
                if (LLONG_MAX / div < hate[idx])
                //ll tdiv = div * hate[idx];
                //if (tdiv / hate[idx] != div)
                {
                    imp = true;
                }
                else
                {
                    as = as * -1;
                    //div = tdiv;
                    div = div * hate[idx];
                }
            }
            temp /= 2;
            idx++;
        }
        if (imp)
            continue;
        ans += (n / div) * as;
    }

    cout << ans;

    return 0;
}