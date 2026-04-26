#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct cr {
    int a;
    int b;
    int c;
    int d;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<cr> crs(n);
    for(auto &u : crs) {
        cin >> u.a;
        cin >> u.b;
        cin >> u.c;
        cin >> u.d;
    }

    ll ans = 0;
    for(int i =0 ; i < n; i++) {
        ll a = crs[i].b;
        ll b = crs[i].a;
        if(ans % (crs[i].c + crs[i].d) >= crs[i].c) {
            b += (crs[i].c + crs[i].d) - ans % (crs[i].c + crs[i].d);
        }
        ans += min(a, b);
    }
    cout << ans;


    return 0;
}