#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

template<typename T>
class segTree {
private:
    ll n;
    T id;
    T(*merge)(T, T);
    vector<T> tree;
public:
    segTree(ll n, T id, T(*merge)(T, T)) {
        this->n = n;
        this->id = id;
        this->merge = merge;
        tree.resize(n*4);
    }
    void update(ll idx, T value) {
        _update(1, 1, n, idx, value);
    }
    T query(ll l, ll r) {
        return _query(1, 1, n, l, r);
    }
private:
    void _update(int node, int s, int e, int idx, T value) {
        if(idx < s || e < idx) return;

        if(s == e) {
            tree[node] = value;
            return;
        }

        _update(node*2, s, (s+e)/2, idx, value);
        _update(node*2+1, (s+e)/2+1, e, idx, value);
        tree[node] = merge(tree[node*2], tree[node*2+1]);
    }
    T _query(int node, int s, int e, int l, int r) {
        if(l > e || r < s) return id;
        if(l <= s && e <= r) return tree[node];

        T lq = _query(node*2, s, (s+e)/2, l, r);
        T rq = _query(node*2+1, (s+e)/2+1, e, l, r);
        return merge(lq, rq);
    }
};

struct node {
    ll ls;
    ll rs;
    ll ms;
    ll ts;
    node operator+(const node& a) {
        node temp;
        temp.ls = max(ls, ts + a.ls);
        temp.rs = max(a.rs, a.ts + rs);
        temp.ms = max({ms, a.ms, rs+a.ls});
        temp.ts = ts + a.ts;
        return temp;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    segTree<node> s(n, {-INF, -INF, -INF, 0}, [](node a, node b){return a+b;});
    for(int i = 1; i <= n; i++) {
        int input;
        cin >> input;
        s.update(i, {input, input, input, input});
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << s.query(a, b).ms << "\n";
    }
    return 0;
}