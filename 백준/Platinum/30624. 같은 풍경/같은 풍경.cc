#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

#define x first
#define y second

pll h;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

pll get_rc(pll c) {
    pll rc = {c.x - h.x, c.y - h.y};
    return rc;
}

bool comp(pll &a, pll &b) {
    pll rca = get_rc(a), rcb = get_rc(b);
    return rca.y * rcb.x < rcb.y * rca.x;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M >> h.x >> h.y;

    vector<pll> arr(N);
    for(auto &u : arr) {
        cin >> u.x >> u.y;
    }
    sort(all(arr), comp);

    //pll _M = {1000000001, 1}, _m = {-1000000001, 1};
    ld _M = 1000000001, _m = -1000000001;
    for(int i = 0; i < N - 1; i++) {
        ll a = arr[i].y - arr[i+1].y;
        ll b = arr[i+1].x - arr[i].x;
        ll m = arr[i+1].y*arr[i].x - arr[i+1].x*arr[i].y;
        if(a==0) continue;
        if(a < 0) {
            a = -a;
            b = -b;
            m = -m;
        }
        ll n = -h.y;
        ld xh, xic;
        xh = (n*b - m) / a;
        if((n*b - m) % a) {
            xh += (n*b - m > 0 ? 0.5 : -0.5);
        }
        xic = -m / a;
        if(-m % a) {
            xic += (-m > 0 ? 0.5 : -0.5);
        }
        if(xh < h.x) {
            _m = max(_m, xic);
        }
        else {
            _M = min(_M, xic);
        }
    }

    int ans = 0;
    for(int i = 0; i < M; i++) {
        ll xc;
        cin >> xc;
        if(_m < xc && xc < _M) ans++;
    }
    cout << ans;

    return 0;
}