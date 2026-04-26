#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll dist(pll a, pll b) {
    return abs(a.first-b.first) + abs(a.second-b.second);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, k;
    cin >> n >> k;
    set<pll> _s;
    for(int i = 0; i < n; i++) {
        ll a, b;
        cin >> a >> b;
        _s.insert(pll(a,b));
    }
    pll dest;
    cin >> dest.first >> dest.second;
    ll ans = k+1;
    for(auto u : _s) {
        pll curr = u;
        ll sp = 2 + dist(curr, dest);
        ans = min(ans, sp);
        pll temp = {dest.first-curr.first, dest.second-curr.second};
        if(_s.find(temp) != _s.end()) {
            ans = min(ans, 4ll);
        }
        if(_s.find(pll(temp.first-1, temp.second)) != _s.end()) {
            ans = min(ans, 5ll);
        }
        if(_s.find(pll(temp.first+1, temp.second)) != _s.end()) {
            ans = min(ans, 5ll);
        }
        if(_s.find(pll(temp.first, temp.second-1)) != _s.end()) {
            ans = min(ans, 5ll);
        }
        if(_s.find(pll(temp.first, temp.second+1)) != _s.end()) {
            ans = min(ans, 5ll);
        }
    }
    ans = min(ans, dist(pll(0,0), dest));
    cout << (ans > k ? -1 : ans);

    return 0;
}