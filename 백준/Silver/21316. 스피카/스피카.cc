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

    vector<vector<int>> edge(13);

    for(int i = 0; i < 12; i++) {
        int a, b;
        cin >> a >> b;
        edge[a].emplace_back(b);
        edge[b].emplace_back(a);
    }

    for(int i = 1; i <= 12; i++) {
        if(edge[i].size() != 3) continue;
        bool check[4] = {};
        for(auto v : edge[i]) {
            check[edge[v].size()] = true;
        }
        if(check[1] && check[2] && check[3]) {
            cout << i;
            return 0;
        }
    }

    return 0;
}