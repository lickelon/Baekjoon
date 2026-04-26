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

    int n;
    cin >> n;

    vector<int> _v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> _v[i];
    }

    int M = 0;
    int ans = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        if(_v[i] > M)
        {
            ans++;
            M = _v[i];
        }
    }

    cout << ans;

    return 0;
}