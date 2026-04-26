#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int parent[10001];
int cost[10001];

int find(int x) {
    if(parent[x] == x) return x;
    return (parent[x] = find(parent[x]));
}

void merge(int x, int y) {
    x = find(x);
    y = find(y);
    if(cost[x] < cost[y]) parent[y] = x;
    else parent[x] = y;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m, k;
    cin >> n >> m >> k;
    for(int i = 1; i <= n; i++) {
        parent[i] = i;
        cin >> cost[i];
    }
    for(int i = 0; i < m; i++) {
        int v, w;
        cin >> v >> w;
        merge(v, w);
    }

    vector<bool> check(n+1, false);
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        if(check[find(i)]) continue;
        ans += cost[parent[i]];
        check[parent[i]] = true;
    }
    if(ans > k) cout << "Oh no";
    else cout << ans;
    
    return 0;
}