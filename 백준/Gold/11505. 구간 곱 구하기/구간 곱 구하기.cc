#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define MOD 1000000007

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll init(vector<ll> &tree, vector<ll> &arr, int node, int s, int e) {
    if(s == e) {
        tree[node] = arr[s];
        return tree[node];
    }

    ll li = init(tree, arr, node*2, s, (s+e)/2);
    ll ri = init(tree, arr, node*2+1, (s+e)/2+1, e);
    return tree[node] = (li * ri) % MOD;
}

void update(vector<ll> &tree, int node, int s, int e, int idx, ll value) {
    if(idx < s || e < idx) return;

    if(s == e) {
        tree[node] = value;
        return;
    }

    update(tree, node*2, s, (s+e)/2, idx, value);
    update(tree, node*2+1, (s+e)/2+1, e, idx, value);
    tree[node] = (tree[node*2]*tree[node*2+1]) % MOD;
}

ll query(vector<ll> &tree, int node, int s, int e, int l, int r) {
    if(l > e || r < s) return 1;
    if(l <= s && e <= r) return tree[node] % MOD;

    ll lq = query(tree, node*2, s, (s+e)/2, l, r);
    ll rq = query(tree, node*2+1, (s+e)/2+1, e, l, r);
    return (lq * rq) % MOD;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> arr(n+1), tree(4*n+4);
    for(int i = 1; i <= n; i++) cin >> arr[i];
    init(tree, arr, 1, 1, n);
    for(int i = 0; i < m+k; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if(a == 1) update(tree, 1, 1, n, b, c);
        else cout << query(tree, 1, 1, n, b, c) << "\n";
    }

    return 0;
}