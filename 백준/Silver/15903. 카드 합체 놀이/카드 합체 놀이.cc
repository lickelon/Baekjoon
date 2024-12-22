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

    int n, m;
    cin >> n >> m;
    priority_queue<ll> _pq;
    for(int i = 0; i < n; i++) {
        ll input;
        cin >> input;
        _pq.push(-input);
    }
    for(int i = 0; i < m; i++) {
        ll a = _pq.top(); _pq.pop();
        ll b = _pq.top(); _pq.pop();
        _pq.push(a+b);
        _pq.push(a+b);
    }
    ll ans = 0;
    while(!_pq.empty()) {
        ans += -_pq.top();
        _pq.pop();
    }
    cout << ans;
    return 0;
}