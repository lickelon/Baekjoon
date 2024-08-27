#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct node {
    int idx;
    ll m_dist;
    ll dist;
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<ll> num(n+1);
    for(int i = 1; i <= n; i++) cin >> num[i];
    vector<vector<pll>> edge(n+1);
    for(int i = 0; i < n-1; i++) {
        int p, c;
        cin >> p >> c;
        edge[p].emplace_back(i+2, c);
    }
    stack<node> _st;
    _st.push({1, 0, 0});
    vector<bool> check(n+1, false);
    while(!_st.empty()) {
        auto curr = _st.top(); _st.pop();
        if(curr.dist - curr.m_dist > num[curr.idx]) {
            check[curr.idx] = true;
        }
        for(auto u : edge[curr.idx]) {
            node next;
            next.idx = u.first;
            next.dist = curr.dist + u.second;
            next.m_dist = min(next.dist, curr.m_dist);
            _st.push(next);
            if(check[curr.idx]) check[next.idx] = true;
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(check[i]) cnt++;
    }
    cout << cnt;

    return 0;
}