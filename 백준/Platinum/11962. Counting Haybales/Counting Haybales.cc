#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<ll> arr, lazy;
vector<pll> tree;

pll merge(pll a, pll b) {
    return pll(a.first+b.first, min(a.second, b.second));
}

void build(int node, int s, int e) {
    if(s == e) {
        tree[node] = {arr[s], arr[s]};
        return;
    }

    build(node*2, s, (s+e)/2);
    build(node*2+1, (s+e)/2+1, e);
    tree[node] = merge(tree[node*2], tree[node*2+1]);
}

void push(int node, int s, int e, ll value) {
    tree[node].first += (e-s+1) * value;
    tree[node].second += value;
    if(s != e) {
        lazy[node*2] += value;
        lazy[node*2+1] += value;
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

pll query(int node, int s, int e, int l, int r) {
    push(node, s, e, lazy[node]);
    if(e < l || r < s) return {0, INF};
    if(l <= s && e <= r) return tree[node];

    pll lq = query(node*2, s, (s+e)/2, l, r);
    pll rq = query(node*2+1, (s+e)/2+1, e, l, r);
    return merge(lq, rq);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    arr.resize(n+1);
    lazy.resize(n*4, 0);
    tree.resize(n*4, {0, INF});
    
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    build(1, 1, n);
    for(int i = 0; i < m; i++) {
        string q;
        cin >> q;
        if(q == "M") {
            int a, b;
            cin >> a >> b;
            cout << query(1, 1, n, a, b).second << "\n";
        }
        if(q == "S") {
            int a, b;
            cin >> a >> b;
            cout << query(1, 1, n, a, b).first << "\n";
        }
        if(q == "P") {
            int a, b, c;
            cin >> a >> b >> c;
            update(1, 1, n, a, b, c);
        }
    }
    

    return 0;
}