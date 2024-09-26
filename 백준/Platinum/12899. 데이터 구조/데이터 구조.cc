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
    T query(ll cnt) {
        return _query(1, 1, n, cnt);
    }
private:
    void _update(int node, int s, int e, int idx, T value) {
        if(idx < s || e < idx) return;

        if(s == e) {
            tree[node] = merge(tree[node], value);
            return;
        }

        if(idx <= (s+e)/2) _update(node*2, s, (s+e)/2, idx, value);
        else _update(node*2+1, (s+e)/2+1, e, idx, value);
        tree[node] = merge(tree[node*2], tree[node*2+1]);
    }
    T _query(int node, int s, int e, ll cnt) {
        if(s == e) return s;

        if(cnt <= tree[node*2]) return _query(node*2, s, (s+e)/2, cnt);
        else return _query(node*2+1, (s+e)/2+1, e, cnt - tree[node*2]);
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    segTree<int> s(2000000, 0, [](int a, int b){return a + b;});

    for(int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        if(a == 1) {
            s.update(b, 1);
            continue;
        }
        int ret = s.query(b);
        s.update(ret, -1);
        cout << ret << "\n";
    }

    return 0;
}