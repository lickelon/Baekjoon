#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct route {
    ll s;
    ll e;
    int idx;
    route(ll _s, ll _e, int _idx) : s(_s), e(_e), idx(_idx) {}
};

bool comp(route &a, route &b) {
    if(a.s == b.s) return a.e > b.e;
    return a.s < b.s;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    vector<bool> check(m+1, true);
    vector<route> routes;
    for(int i = 1; i <= m; i++) {
        ll a, b;
        cin >> a >> b;
        if(b < a) b += n;
        routes.emplace_back(a, b, i);
        routes.emplace_back(a+n, b+n, i);
    }
    sort(all(routes), comp);
    ll M = 0;
    for(int i = 0; i < routes.size(); i++) {
        if(routes[i].e <= M) {
            check[routes[i].idx] = false;
        }
        M = max(M, routes[i].e);
    }

    for(int i = 1; i <= m; i++) {
        if(check[i]) cout << i << " ";
    }

    return 0;
}