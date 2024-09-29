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
    vector<int> input(n), arr;
    for(auto &u : input) {
        cin >> u;
        arr.emplace_back(u);
    }

    int q;
    cin >> q;
    vector<array<int, 3>> query(q);
    for(auto &u : query) {
        cin >> u[0];
        if(u[0] == 1) {
            cin >> u[1];
            arr.emplace_back(u[1]);
        }
        else {
            cin >> u[1] >> u[2];
            arr.emplace_back(u[1]);
            arr.emplace_back(u[2]);
        }
    }

    sort(all(arr));
    n = arr.size();
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++) {
        m[arr[i]] = i+1;
    }

    segTree<int> s(n, 0, [](int a, int b){return a+b;});
    for(auto u : input) {
        s.update(m[u], 1);
    }
    for(auto u : query) {
        if(u[0] == 1) {
            s.update(m[u[1]], 1);
        }
        else {
            cout << u[2]-u[1]+1-s.query(m[u[1]], m[u[2]]) << "\n";
        }
    }

    return 0;
}