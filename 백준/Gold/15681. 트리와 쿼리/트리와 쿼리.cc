#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> edge[100001];
int dp[100001];
bool visit[100001];
int dfs(int a) {
    int temp = 1;
    if(dp[a]) return dp[a];
    visit[a] = 1;

    for(auto u : edge[a]) {
        if(!visit[u]) {
            temp += dfs(u);
        }
    }
    return dp[a] = temp;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, r, q;
    cin >> n >> r >> q;
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }

    dfs(r);
    for(int i = 0; i < q; i++) {
        int temp;
        cin >> temp;
        cout << dp[temp] << "\n";
    }

    return 0;
}