#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

using a10 = array<int, 10>;

vector<ll> arr, lazy;
vector<a10> tree;

a10 merge(a10 a, a10 b) {
    a10 ret = a10();
    for(int i = 0; i < 10; i++) {
        ret[i] = a[i] + b[i];
    }
    return ret;
}

void build(int node, int s, int e) {
    if(s == e) {
        tree[node] = a10();
        tree[node][arr[s]] = 1;
        return;
    }

    build(node*2, s, (s+e)/2);
    build(node*2+1, (s+e)/2+1, e);
    tree[node] = merge(tree[node*2], tree[node*2+1]);
}

void push(int node, int s, int e, ll value) {
    a10 temp;
    for(int i = 0; i < 10; i++) {
        temp[(i+value) % 10] = tree[node][i];
    }
    for(int i = 0; i < 10; i++) {
        tree[node][i] = temp[i];
    }

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

a10 query(int node, int s, int e, int l, int r) {
    push(node, s, e, lazy[node]);
    if(e < l || r < s) return a10();
    if(l <= s && e <= r) return tree[node];

    a10 lq = query(node*2, s, (s+e)/2, l, r);
    a10 rq = query(node*2+1, (s+e)/2+1, e, l, r);
    return merge(lq, rq);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    arr.resize(n+1);
    lazy.resize(4*n, 0);
    tree.resize(4*n, a10());

    string s;
    cin >> s;
    for(int i = 1; i <= n; i++) {
        arr[i] = s[i-1] - '0';
    }
    build(1, 1, n);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a10 ret = query(1, 1, n, a, b);
        int ans = 0;
        for(int i = 0; i < 10; i++) {
            ans += i * ret[i];
        }
        cout << ans << "\n";
        update(1, 1, n, a, b, 1);
    }
    return 0;
}