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
    vector<ll> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll ans = max(arr[0], arr[n-1]);
    for(int i = 1; i < n - 1; i++)
    {
        ans = max(ans, arr[i] + min(arr[i-1], arr[i+1]));
    }

    cout << ans;

    return 0;
}