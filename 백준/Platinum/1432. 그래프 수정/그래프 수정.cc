#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<vector<int>> adj(n+1);
    vector<int> cnt(n+1, 0);
    for(int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < n; j++) {
            if(s[j] == '1') {
                adj[j+1].emplace_back(i);
                cnt[i]++;
            }
        }
    }

    priority_queue<int> _pq;
    for(int i = 1; i <= n; i++) {
        if(cnt[i] == 0) _pq.push(i);
    }

    vector<int> ans(n+1);
    int num = n;
    while(!_pq.empty()) {
        int curr = _pq.top(); _pq.pop();
        ans[curr] = num--;
        for(auto u : adj[curr]) {
            cnt[u]--;
            if(cnt[u] == 0) _pq.push(u);
        }
    }
    if(num != 0) {
        cout << -1;
        return 0;
    }
    for(int i = 1; i <= n; i++) cout << ans[i] << " ";

    return 0;
}