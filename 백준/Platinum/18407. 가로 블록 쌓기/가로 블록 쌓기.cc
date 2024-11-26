#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<ll> arr, lazy, tree;

ll merge(ll a, ll b) {
    return max(a, b);
}

void push(int node, int s, int e, ll value) {
    if(value == 0) return;
    tree[node] = max(tree[node], value);
    if(s != e) {
        lazy[node*2] = max(lazy[node*2], value);
        lazy[node*2+1] = max(lazy[node*2+1], value);
    }
    lazy[node] = 0;
}

void update(int node, int s, int e, int l, int r, ll value) {
    push(node, s, e, lazy[node]);
    if(e < l || r < s) return;
    if(l <= s && e <= r) {
        push(node, s, e, value);
        return;
    }
    update(node*2, s, (s+e)/2, l, r, value);
    update(node*2+1, (s+e)/2+1, e, l, r, value);
    tree[node] = merge(tree[node*2], tree[node*2+1]);
}

ll query(int node, int s, int e, int l, int r) {
    push(node, s, e, lazy[node]);
    if(e < l || r < s) return 0;
    if(l <= s && e <= r) return tree[node];

    ll lq = query(node*2, s, (s+e)/2, l, r);
    ll rq = query(node*2+1, (s+e)/2+1, e, l, r);
    return merge(lq, rq);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<pll> arr(n);
    map<ll, ll> _m;
    for(auto &e : arr) {
        cin >> e.second >> e.first;
        e.second += e.first-1;
        _m[e.first] = 0;
        _m[e.second] = 0;
    }
    int idx = 1;
    for(auto &[k, v] : _m) {
        v = idx++;
    }

    int s = _m.size();
    tree.resize(s*4, 0);
    lazy.resize(s*4, 0);
    for(int i = 0; i < n; i++) {
        ll h = query(1, 1, s, _m[arr[i].first], _m[arr[i].second]);
        update(1, 1, s, _m[arr[i].first], _m[arr[i].second], h+1);
    }
    cout << query(1, 1, s, 1, s);

    return 0;
}