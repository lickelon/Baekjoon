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
    return a | b;
}

void push(int node, int s, int e, ll value) {
    if(value == 0) return;
    tree[node] = value;
    if(s != e) {
        lazy[node*2] = value;
        lazy[node*2+1] = value;
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

    int n, t, q;
    cin >> n >> t >> q;
    lazy.resize(n*4, 0);
    tree.resize(n*4, 1);
    
    for(int i = 0; i < q; i++) {
        string s;
        int a, b;
        cin >> s >> a >> b;
        if(a > b) swap(a, b);
        if(s == "C") {
            int c;
            cin >> c;
            update(1, 1, n, a, b, 1 << (c-1));
        }
        if(s == "Q") {
            int ret = query(1, 1, n, a, b);
            int ans = 0;
            for(int i = 0; i < t; i++) {
                if(ret & (1 << i)) ans++;
            }
            cout << ans << "\n";
        }
    }
    

    return 0;
}