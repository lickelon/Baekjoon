#include <bits/stdc++.h>

using namespace std;

vector<int> topology_sort(vector<vector<int>>& e) {
    int n = e.size() - 1;
    vector<int> deg(n+1);
    for(int i = 1; i <= n; i++) {
        for(auto u : e[i]) {
            deg[u]++;
        }
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 1; i <= n; i++) {
        if(deg[i] == 0) pq.push(i);
    }

    vector<int> ans;
    while(!pq.empty()) {
        int curr = pq.top(); pq.pop();
        ans.emplace_back(curr);
        for(auto u : e[curr]) {
            deg[u]--;
            if(deg[u] == 0) pq.push(u);
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> e(n+1, vector<int>());
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        e[a].emplace_back(b);
    }

    for(auto u : topology_sort(e)) {
        cout << u << " ";
    }

    return 0;
}