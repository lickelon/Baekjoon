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
    vector<vector<int>> edge(n);
    for(int i = 0; i < n-1; i++) {
        int a, b;
        cin >> a >> b;
        edge[a].emplace_back(b);
    }
    vector<int> arr(n);
    for(auto &u : arr) cin >> u;

    function<ll(int)> dfs = [&](int k){
        ll ret = arr[k];
        for(auto u : edge[k]) {
            ll temp = dfs(u);
            if(temp > 0) ret += temp;
        }
        return ret;
    };

    cout << dfs(0);

    return 0;
}