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

    ll n, k;
    cin >> n >> k;

    ll left = 1, right = n * n;
    while(left < right) {
        ll mid = (left + right) / 2;
        ll cnt = 0;
        for(ll i = 1; i <= n; i++) {
            cnt += min(mid / i, n);
        }
        if(cnt < k) left = mid+1;
        else right = mid;
    }
    cout << left;

    return 0;
}