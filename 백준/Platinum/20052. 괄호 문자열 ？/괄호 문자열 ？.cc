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

    string str;
    cin >> str;
    int n = str.length();
    vector<int> sum(n+1);
    for(int i = 0; i < n; i++) {
        sum[i+1] = (str[i] == '(' ? 1 : -1);
        sum[i+1] += sum[i];
    }
    
    segTree<int> s(n, INF, [](int a, int b){return min(a,b);});
    for(int i = 1; i <= n; i++) s.update(i, sum[i]);

    int q;
    cin >> q;
    int ans = 0;
    for(int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        int m = s.query(a, b);
        if(m >= sum[b] && sum[a-1] == sum[b]) ans++;
    }
    cout << ans;

    return 0;
}