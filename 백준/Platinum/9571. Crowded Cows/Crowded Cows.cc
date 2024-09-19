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

    int n, d;
    cin >> n >> d;
    segTree<int> s(n+2, 0, [](int a, int b){return max(a, b);});
    vector<pii> arr(n);
    for(auto &[a, b] : arr) cin >> a >> b;
    arr.emplace_back(0, 0);
    arr.emplace_back(2000000001, 0);
    sort(all(arr));
    for(int i = 0; i < arr.size(); i++) {
        s.update(i+1, arr[i].second);
    }
    int l = 0, r = 1;
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        r = max(r, i);
        l = min(l, i);
        while(arr[i].first - arr[l].first > d) l++;
        while(arr[r+1].first - arr[i].first <= d) r++;
        int lq = s.query(l+1, i+1);
        int rq = s.query(i+1, r+1);
        int ch = arr[i].second;
        if(lq >= ch*2 && rq >= ch*2) ans++;
    }
    cout << ans;

    return 0;
}