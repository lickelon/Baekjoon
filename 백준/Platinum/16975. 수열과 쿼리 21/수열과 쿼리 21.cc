#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<ll> lazy, tree;

void push(int node, int s, int e) {
    if(lazy[node] != 0) {
        tree[node] += (e-s+1) * lazy[node];
        if(s != e) {
            lazy[node*2] += lazy[node];
            lazy[node*2+1] += lazy[node];
        }
        lazy[node] = 0;
    }
}

void update(int node, int s, int e, int l, int r, ll value) {
    push(node, s, e);
    if(e < l || r < s) return;
    if(l <= s && e <= r) {
        tree[node] += (e-s+1) * value;
        if(s != e) {
            lazy[node*2] += value;
            lazy[node*2+1] += value;
        }
        return;
    }
    update(node*2, s, (s+e)/2, l, r, value);
    update(node*2+1, (s+e)/2+1, e, l, r, value);
    tree[node] = tree[node*2] + tree[node*2+1];
}

ll query(int node, int s, int e, int l, int r) {
    push(node, s, e);
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
    lazy.resize(n*4, 0);
    tree.resize(n*4, 0);

    for(int i = 1; i <= n; i++) {
        ll input;
        cin >> input;
        update(1, 1, n, i, i, input);
    }

    int m;
    cin >> m;
    for(int i = 0; i < m; i++) {
        int q;
        cin >> q;
        if(q == 1) {
            int a, b, c;
            cin >> a >> b >> c;
            update(1, 1, n, a, b, c);
        }
        if(q == 2) {
            int a;
            cin >> a;
            cout << query(1, 1, n, a, a) << "\n";
        }
    }

    return 0;
}