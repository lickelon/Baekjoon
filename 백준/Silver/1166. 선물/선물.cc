#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout.precision(10);

    ll n;
    ll l[3];
    cin >> n >> l[0] >> l[1] >> l[2];
    ld left = 0;
    ld right = min({l[0], l[1], l[2]});

    while(left < right) {
        ld mid = (left + right) / 2;
        if(right - left < 1e-9) break;

        ll temp = 1;
        for(auto u : l) temp *= (ll)(u / mid);
        if(temp < n) right = mid;
        else left = mid;
    }
    cout << left;

    return 0;
}