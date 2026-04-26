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

bool compare(pll& a, pll& b)
{
    if(b.second == a.second) return a.first > b.first;
    return a.second > b.second;
}

ll arr[5001][5001];
vector<pll> data;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    data.resize(n);

    for(int i = 0; i < n; i++)
        cin >> data[i].first;
    for(int i = 0; i < n; i++)
        cin >> data[i].second;

    sort(data.begin(), data.end(), compare);

    for(int k = 1; k <= n; k++)
    {
        for(int s = 1; s <= k; s++)
        {
            arr[k][s] = max(arr[k-1][s], arr[k-1][s-1] - (s-1)*(data[k-1].second) + data[k-1].first);
        }
    }

    ll ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans = max(ans, arr[n][i]);
    }

    cout << ans;

    return 0;
}