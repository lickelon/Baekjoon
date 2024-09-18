#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

template<typename T> struct segTree {
	int n; //크기 (1-based로 쓰려면 1크게 넣어야 함)
	T id; //항등원
	vector<T> t;
	T(*merge)(T, T);
	segTree(int N, T ID, T(*_merge)(T, T)): n(N), id(ID), merge(_merge) { t.resize(N<<1, id); }					
	void update(int p, T val) {
		for (t[p+=n] = val; p > 1; p >>= 1) {//기존 거랑 비교해서 바꿔야 하면 t[p+=n] = '그 값'으로 수정 필요.
			if(p&1) t[p>>1] = merge(t[p^1], t[p]);
			else t[p>>1] = merge(t[p], t[p^1]);
		}
	}
	T query(int l, int r) {//query on interval [l, r)
		T lret=id, rret=id;
		for(l += n, r += n; l < r; l >>= 1, r >>= 1) {
			if(l&1) lret = merge(lret, t[l++]);
			if(r&1) rret = merge(t[--r], rret);
		}
		return merge(lret, rret);
	}
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;
    unordered_map<int, int> _m;
    for(int i = 0; i < n; i++) {
        _m[arr[i]] = i+1;
    }
    sort(all(arr));

    segTree<int> s(n+1, 0, [](int a, int b){return a + b;});
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ans += s.query(_m[arr[i]], n+1);
        s.update(_m[arr[i]], 1);
    }
    cout << ans;

    return 0;
}