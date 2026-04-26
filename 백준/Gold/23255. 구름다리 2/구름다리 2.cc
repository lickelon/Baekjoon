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

    int n, m;
    cin >> n >> m;
    vector<int> arr(n+1, 0);
    vector<vector<int>> edge(n+1);
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        edge[a].emplace_back(b);
        edge[b].emplace_back(a);
    }

    for(int i = 1; i <= n; i++) {
        set<int> _s;
        for(auto u : edge[i]) {
            _s.insert(arr[u]);
        }
        for(int j = 1; j <= n; j++) {
            if(_s.find(j) == _s.end()) {
                arr[i] = j;
                break;
            }
        }
        cout << arr[i] << " ";
    }

    return 0;
}