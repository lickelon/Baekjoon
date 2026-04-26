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

    ll n;
    cin >> n;
    unordered_map<ll, ll> _um;
    _um[n] = 0;
    queue<ll> _q;
    _q.push(n);
    while(!_q.empty()) {
        ll temp = _q.front(); _q.pop();
        if(temp == 1) break;
        if(temp % 3 == 0 && !_um[temp/3]) {
            _um[temp/3] = _um[temp]+1;
            _q.push(temp/3);
        }
        if(temp % 2 == 0 && !_um[temp/2]) {
            _um[temp/2] = _um[temp]+1;
            _q.push(temp/2);
        }
        if(!_um[temp-1]) {
            _um[temp-1] = _um[temp]+1;
            _q.push(temp-1);
        }
    }
    cout << _um[1];

    return 0;
}