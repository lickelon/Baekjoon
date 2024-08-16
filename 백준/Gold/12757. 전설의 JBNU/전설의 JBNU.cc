#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

map<int, int>::iterator find(map<int, int> &_m, int idx, int dist) {
    auto l = _m.lower_bound(idx);
    auto d = _m.find(idx);
    auto r = _m.upper_bound(idx);

    if(d != _m.end()) return d;

    if(l != _m.begin()) l--;
    if(l->first > idx || r == _m.end()) {
        return (abs(l->first - idx) > dist ? _m.end(): l);
    }

    if(idx - l->first == r->first - idx) {
        if(abs(l->first - idx) <= dist) throw -1;
        return _m.end();
    }
    

    if(idx - l->first < r->first - idx) {
        return (abs(l->first - idx) > dist ? _m.end(): l);
    }
    else {
        return (abs(r->first - idx) > dist ? _m.end(): r);
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, dist;
    cin >> n >> m >> dist;
    map<int, int> _m;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        _m[a] = b;
    }

    for(int i = 0; i < m; i++) {
        int comm;
        cin >> comm;
        int k, v;
        switch (comm)
        {
        case 1:
            cin >> k >> v;
            _m[k] = v;
            break;
        case 2:
            cin >> k >> v;
            try {
                auto it = find(_m, k, dist);
                if(it != _m.end()) {
                    it->second = v;
                }
            }
            catch(int exp) {}
            break;
        case 3:
            cin >> k;
            try {
                auto it = find(_m, k, dist);
                if(it != _m.end()) {
                    cout << it->second << "\n";
                }
                else {
                    cout << "-1\n";
                }
            }
            catch(int exp) {
                cout << "?\n";
            }
            break;
        }
    }

    return 0;
}