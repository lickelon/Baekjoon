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
        tree.resize(n*4, id);
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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    ll n, m, k;
    cin >> n >> m >> k;
    vector<priority_queue<ll>> garden(n+1);
    segTree<pll> seg_max(n, pll(-1e18, -1), [](pll a, pll b){return max(a,b);});
    for(int i = 1; i <= n; i++) {
        garden[i].push(-1e18);
        seg_max.update(i, {garden[i].top(), i});
    }
    segTree<ll> seg_sum(n, 0, [](ll a, ll b){return a+b;});
    for(int i = 0; i < m; i++) {
        ll q, a, b, c, d;
        cin >> q;
        if(q == 1) {
            cin >> a >> b >> c;
            garden[b].push(c-a*k);
            seg_max.update(b, {garden[b].top(), b});
            seg_sum.update(b, garden[b].size()-1);
        }
        if(q == 2) {
            cin >> a >> b >> c >> d;
            ll pivot = d-a*k;
            while(true) {
                pll curr = seg_max.query(b, c);
                if(curr.first <= pivot) break;
                ll idx = curr.second;
                garden[idx].pop();
                seg_max.update(idx, {garden[idx].top(), idx});
                seg_sum.update(idx, garden[idx].size()-1);
            }
        }
        if(q == 3) {
            cin >> a >> b >> c;
            cout << seg_sum.query(b, c) << "\n";
        }
    }


    return 0;
}