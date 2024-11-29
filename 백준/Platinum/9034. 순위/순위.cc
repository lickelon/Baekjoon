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

struct query {
    int q;
    int a;
    int b;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int T;
    cin >> T;
    while(T--) {
        int n, m;
        cin >> n >> m;
        vector<query> qarr(m);
        for(auto &e : qarr) {
            string s;
            cin >> s;
            if(s == "R") {
                e.q = 1;
                cin >> e.a >> e. b;
            }
            else {
                e.q = 2;
                cin >> e.a;
            }
        }

        vector<int> scores(n+1);
        map<int, int> _m;
        _m[0] = 0;
        for(auto e : qarr) {
            if(e.q == 2) continue;
            scores[e.a] += e.b;
            _m[scores[e.a]] = 0;
        }
        int idx = 1;
        for(auto &[k, v] : _m) {
            v = idx++;
        }

        fill(all(scores), 0);
        segTree<int> s(_m.size(), 0, [](int a, int b){return a+b;});
        s.update(_m[0], n);
        for(auto e : qarr) {
            if(e.q == 1) {
                int curr = _m[scores[e.a]];
                s.update(curr, s.query(curr, curr)-1);
                int next = _m[(scores[e.a] += e.b)];
                s.update(next, s.query(next, next)+1);
            }
            if(e.q == 2) {
                cout << s.query(_m[scores[e.a]]+1, _m.size()) + 1 << "\n";
            }
        }
    }

    return 0;
}