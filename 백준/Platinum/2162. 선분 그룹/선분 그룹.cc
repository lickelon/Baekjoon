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

ll ccw(pair<pll, pll> l, pll p) {
    pll p1 = l.first, p2 = l.second;
    ll s = (p1.x*p2.y + p2.x*p.y + p.x*p1.y)
         - (p1.y*p2.x + p2.y*p.x + p.y*p1.x);
    if(s == 0) return s;
    return (s>0 ? 1 : -1);
}

bool intersect(pair<pll, pll> l1, pair<pll, pll> l2) {
    if(l1 > l2) swap(l1, l2);
    ll a = ccw(l1, l2.first) * ccw(l1, l2.second);
    ll b = ccw(l2, l1.first) * ccw(l2, l1.second);

    if(a|b) return a <= 0 && b <= 0;
    else return l2.first <= l1.second;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<pair<pll, pll>> arr(n);
    for(auto &u : arr) {
        cin >> u.first.x >> u.first.y;
        cin >> u.second.x >> u.second.y;
        if(u.first > u.second) swap(u.first, u.second);
    }

    vector<int> parent(n, -1);
    function<int(int)> find = [&](int a) {
        if(parent[a] == -1) return a;
        return parent[a] = find(parent[a]);
    };
    auto merge = [&](int a, int b) {
        a = find(a); b = find(b);
        if(b != a) parent[b] = a;
    };

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            if(intersect(arr[i], arr[j]))
                merge(i, j);
        }
    }

    map<ll, ll> _m;
    for(int i = 0; i < n; i++) _m[find(i)]++;

    vector<pll> res(all(_m));
    sort(all(res), [](pll a, pll b){return a.second > b.second;});
    cout << res.size() << "\n" << res[0].second;

    return 0;
}