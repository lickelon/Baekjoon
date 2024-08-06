#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

bool is_square(ll n) {
    if(n <= 1) return true;
    ll l = 2, r = n/2;
    while(l <= r) {
        ll mid = (l+r)/2;
        ll sq = mid*mid;

        if (mid > n / mid) {
            r = mid - 1;
            continue;
        }

        if(sq == n) return true;

        if(sq < n) l = mid+1;
        else r = mid-1;
    }
    return false;
}

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
    for(auto &u : arr) cin >> u;
    vector<ll> res(all(arr));
    sort(all(res));

    for(int i = 0; i < n; i++) {
        ll a = arr[i], b = res[i];
        ll g = gcd(a, b);
        a /= g;
        b /= g;
        if(!is_square(a) || !is_square(b)) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}