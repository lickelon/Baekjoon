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

    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n+1);
    vector<bool> visit(n+1, false);
    for(ll i = 1; i <= n; i++) cin >> arr[i];

    int p;
    cin >> p;
    vector<vector<pll>> tip(n+1);
    while(p--) {
        ll a, b, t;
        cin >> a >> b >> t;
        tip[a].emplace_back(pll(b, t));
        arr[b] += t;
    }
    priority_queue<pll, vector<pll>, greater<pll>> _pq;
    for(ll i = 1; i <= n; i++) _pq.push({arr[i], i});

    ll ans = 0;
    for(int i = 0; i < m; i++) {
        auto curr = _pq.top(); _pq.pop();
        if(visit[curr.second]) {
            i--;
            continue;
        }
        ans = max(ans, curr.first);
        visit[curr.second] = true;
        for(auto u : tip[curr.second]) {
            if(visit[u.first]) continue;
            arr[u.first] -= u.second;
            _pq.push({arr[u.first], u.first});
        }
    }
    cout << ans;

    return 0;
}