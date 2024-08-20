#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define MOD 1000000007ll
using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

void update(vector<ll> &tree, int node, int s, int e, int idx, ll diff) {
    if(idx < s || e < idx) return;

    tree[node] = (tree[node] + diff);

    if(s != e) {
        update(tree, node*2, s, (s+e)/2, idx, diff);
        update(tree, node*2+1, (s+e)/2+1, e, idx, diff);
    }
}

ll query(vector<ll> &tree, int node, int s, int e, int l, int r) {
    if(l > e || r < s) return 0;
    if(l <= s && e <= r) return tree[node] % MOD;

    ll lq = query(tree, node*2, s, (s+e)/2, l, r);
    ll rq = query(tree, node*2+1, (s+e)/2+1, e, l, r);
    return (lq + rq) % MOD;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<ll> arr(n);
    map<ll, int> _m;
    for(auto &u : arr) {
        cin >> u;
        _m[u] = 0;
    }
    int idx = 1;
    for(auto &u : _m) {
        u.second = idx++;
    }
    vector<ll> treeA(4*n), treeB(4*n); // sum, cnt
    int ans = 0;
    for(int i = 0; i < n; i++) {
        ll temp = 0;
        temp += query(treeA, 1, 1, n, _m[arr[i]]+1, n);
        temp -= arr[i]*query(treeB, 1, 1, n, _m[arr[i]]+1, n);
        update(treeA, 1, 1, n, _m[arr[i]], arr[i]);
        update(treeB, 1, 1, n, _m[arr[i]], 1);
        temp %= MOD;
        temp = (temp + MOD) % MOD;
        ans = (ans + temp) % MOD;
        cout << ans << "\n";
    }
    return 0;
}