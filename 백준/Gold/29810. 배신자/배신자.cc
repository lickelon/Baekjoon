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

    vector<int> e[200001];
    bool visit[200001] = {};
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        e[a].emplace_back(b);
        e[b].emplace_back(a);
    }
    int x;
    cin >> x;
    visit[x] = true;
    /*
    int ans = 1;
    for(int i = 0; i < e[x].size(); i++) {
        stack<int> _st;
        if(visit[e[x][i]]) continue;

        _st.push(e[x][i]);
        visit[e[x][i]] = true;
        int temp = 1;

        int cntX = 0;
        while(!_st.empty()) {
            int t = _st.top(); _st.pop();
            for(auto u : e[t]) {
                if(u == x) cntX++;
                if(visit[u]) continue;
                _st.push(u);
                visit[u] = true;
                temp++;
            }
        }
        if(cntX == 1) temp++;
        ans = max(ans, temp);
    }
    cout << ans;
    */
    int ans = 1;
    for(int i = 1; i <= n; i++) {
        if(visit[i]) continue;

        stack<int> _st;
        _st.push(i);
        visit[i] = true;

        int cntX = 0;
        int temp = 1;
        while(!_st.empty()) {
            int t = _st.top(); _st.pop();
            for(auto u : e[t]) {
                if(u == x) cntX++;
                if(visit[u]) continue;
                _st.push(u);
                visit[u] = true;
                temp++;
            }
        }
        if(cntX == 1) temp++;
        ans = max(ans, temp);
    }
    cout << ans;

    return 0;
}