#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

struct compare {
    bool operator()(pii &a, pii &b) {
        if(a.first == b.first) return a.second > b.second;
        return a.first < b.first;
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, t;
    cin >> n >> t;
    
    priority_queue<pii, vector<pii>, compare> _pq;
    vector<int> prio(n);
    vector<int> ans(n);
    for(int i = 0; i < n; i++) {
        cin >> prio[i];
        _pq.push({prio[i], i});
    }

    for(int i = 1; i <= t; i++) {
        int id = _pq.top().second; _pq.pop();
        ans[id]++;
        _pq.push({prio[id]-i, id});
    }

    for(auto u : ans) {
        cout << u << " ";
    }

    return 0;
}