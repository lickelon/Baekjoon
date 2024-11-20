#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<ll> lazy, tree, arr;

void build(int node, int s, int e) {
    if(s == e) {
        tree[node] = arr[s];
        return;
    }

    build(node*2, s, (s+e)/2);
    build(node*2+1, (s+e)/2+1, e);
    tree[node] = tree[node*2] + tree[node*2+1];
}

void push(int node, int s, int e, ll value) {
    if(value) {
        tree[node] = (e-s+1)-tree[node];
        if(s != e) {
            lazy[node*2] = !lazy[node*2];
            lazy[node*2+1] = !lazy[node*2+1];
        }
        lazy[node] = 0;
    }
}

void update(int node, int s, int e, int l, int r) {
    push(node, s, e, lazy[node]);
    if(e < l || r < s) return;
    if(l <= s && e <= r) {
        push(node, s, e, 1);
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

    int n, m;
    cin >> n >> m;
    arr.resize(n+1);
    lazy.resize(n*4, 0);
    tree.resize(n*4, 0);

    for(int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 0) update(1, 1, n, b, c);
        if(a == 1) cout << query(1, 1, n, b, c) << "\n";
    }

    return 0;
}