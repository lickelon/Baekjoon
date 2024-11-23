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
        tree[node] += (e-s+1) * value;
        if(s != e) {
            lazy[node*2] += value;
            lazy[node*2+1] += value;
        }
        lazy[node] = 0;
    }
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

    int n = 100000;
    lazy.resize(n*4, 0);
    tree.resize(n*4, 0);
    
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        int lq = query(1,1,n,l,l), rq = query(1,1,n,r,r);
        cout << lq+rq << "\n";
        update(1,1,n,l,r,1);
        update(1,1,n,l,l,-lq-1);
        update(1,1,n,r,r,-rq-1);
    }

    return 0;
}