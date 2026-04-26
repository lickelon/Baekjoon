#include <bits/stdc++.h>

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

    ll a, b;
    
    cin >> a >> b;

    queue<pll> _q;

    _q.push({a, 1});

    int cnt = 0;

    while(!_q.empty()) {
        pll t = _q.front(); _q.pop();
        if(t.first == b) {
            cout << t.second;
            return 0;
        }
        if(t.first * 2 <= b) {
            _q.push({t.first * 2, t.second + 1});
        }
        if(t.first * 10 + 1 <= b) {
            _q.push({t.first * 10 + 1, t.second + 1});
        }
    }

    cout << "-1";

    return 0;
}