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

    int n, k;
    cin >> n >> k;
    segTree<int> s(65536, 0, [](int a, int b){return a + b;});
    ll sum = 0;
    vector<int> arr(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i]; arr[i] += 1;
        s.update(arr[i], s.query(arr[i], arr[i])+1);
        if(i < k) continue;
        s.update(arr[i-k], s.query(arr[i-k], arr[i-k])-1);

        int lo = 0, hi = 65537;
        while(lo < hi) {
            int mid = (lo+hi)/2;
            if(s.query(1, mid) < (k+1)/2) lo = mid+1;
            else hi = mid;
        }
        sum += lo - 1;
    }
    cout << sum;

    return 0;
}