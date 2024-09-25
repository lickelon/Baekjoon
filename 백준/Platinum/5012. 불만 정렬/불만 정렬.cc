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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<ll> arr(n);
    for(auto &u : arr) cin >> u;
    segTree<ll> l(n, 0, [](ll a, ll b){return a + b;});  
    segTree<ll> r(n, 0, [](ll a, ll b){return a + b;});  

    for(int i = 2; i < n; i++)
        r.update(arr[i], r.query(arr[i],arr[i])+1);
    l.update(arr[0], 1);

    ll ans = 0;
    for(int i = 1; i < n-1; i++) {
        ans += l.query(arr[i]+1, n) * r.query(1, arr[i]-1);
        l.update(arr[i], l.query(arr[i], arr[i])+1);
        r.update(arr[i+1], r.query(arr[i+1], arr[i+1])-1);
    }
    cout << ans;

    return 0;
}