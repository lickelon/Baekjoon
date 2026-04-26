#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

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
    vector<ll> start(k, 0);
    vector<pll> _end(k, {0,0});
    for(int i = 0; i < n; i++)
    {
        int st, ed;
        cin >> st >> ed;
        start[st-1]++;
        _end[ed-1].first++;
        _end[ed-1].second += ed-st+1;
    }

    ll people = start[0];
    ll ans = people;
    cout << ans << " ";
    for(int i = 1; i < k; i++)
    {
        people -= _end[i-1].first;
        ans -= _end[i-1].second;
        people += start[i];
        ans += people;
        cout << ans << " ";
    }

    return 0;
}