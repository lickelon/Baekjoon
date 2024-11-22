#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<ll> tree, arr;
vector<pll> lazy;

void build(int node, int s, int e) {
    if(s == e) {
        tree[node] = arr[s];
        return;
    }

    build(node*2, s, (s+e)/2);
    build(node*2+1, (s+e)/2+1, e);
    tree[node] = tree[node*2] + tree[node*2+1];
}

void push(int node, int s, int e, pll value) {
    if(value.second) {
        ll l = e-s+1;
        tree[node] += ((2*value.first + (l-1)*value.second)*l)/2;
        if(s != e) {
            lazy[node*2].first += value.first;
            lazy[node*2].second += value.second;
            lazy[node*2+1].first += value.first + value.second*((l-1)/2+1);
            lazy[node*2+1].second += value.second;
        }
        lazy[node] = {0,0};
    }
}

void update(int node, int s, int e, int l, int r) {
    push(node, s, e, lazy[node]);
    if(e < l || r < s) return;
    if(l <= s && e <= r) {
        push(node, s, e, pll(s-l+1,1));
        return;
    }
    update(node*2, s, (s+e)/2, l, r);
    update(node*2+1, (s+e)/2+1, e, l, r);
    tree[node] = tree[node*2] + tree[node*2+1];
}

ll query(int node, int s, int e, int l, int r) {
    push(node, s, e, lazy[node]);
    if(e < l || r < s) return 0;
    if(l <= s && e <= r) return tree[node];

    ll lq = query(node*2, s, (s+e)/2, l, r);
    ll rq = query(node*2+1, (s+e)/2+1, e, l, r);
    return lq + rq;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    arr.resize(n+1);
    lazy.resize(n*4, pll(0,0));
    tree.resize(n*4, 0);

    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    build(1, 1, n);

    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int q;
        cin >> q;
        if(q == 1) {
            int a, b;
            cin >> a >> b;
            update(1, 1, n, a, b);
        }
        if(q == 2) {
            int a;
            cin >> a;
            cout << query(1, 1, n, a, a) << "\n";
        }
    }

    return 0;
}