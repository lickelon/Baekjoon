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

    vector<pii> _v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> _v[i].first >> _v[i].second;
    }

    for(int i = 0; i < n; i++)
    {
        int ans = 1;
        for(int j = 0; j < n; j++)
        {
            if(j == i) continue;
            if(_v[i].first < _v[j].first && _v[i].second < _v[j].second)
            {
                ans++;
            }
        }
        cout << ans << " ";
    }

    return 0;
}