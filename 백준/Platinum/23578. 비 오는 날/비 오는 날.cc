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

    int n;
    cin >> n;
    if(n == 1) {
        cout << 0;
        return 0;
    }
    vector<pii> ve(n);
    ll ans = 0;
    priority_queue<pii, vector<pii>, greater<pii>> _pq;
    for(int i = 0; i < n; i++) {
        cin >> ve[i].first;
        ve[i].second = 1;
        ans += ve[i].first;
        _pq.push({ve[i].first * 3, i});
    }

    for(int i = 0; i < n-2; i++) {
        auto [a, b] = _pq.top(); _pq.pop();
        ve[b].second++;
        ans += a;
        _pq.push({(2*ve[b].second+1)*ve[b].first, b});
    }
    cout << ans;

    return 0;
}