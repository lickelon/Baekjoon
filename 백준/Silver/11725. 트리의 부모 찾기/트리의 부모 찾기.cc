#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> edge[100001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        edge[a].push_back(b);
        edge[b].push_back(a);
    }

    queue<int> _q;
    _q.push(1);
    vector<int> ans(n+1);
    ans[1] = 1;
    while(!_q.empty()) {
        int temp = _q.front(); _q.pop();
        for(auto u : edge[temp]) {
            if(ans[u]) continue;
            ans[u] = temp;
            _q.push(u);
        }
    }
    
    for(int i = 2; i <= n; i++) {
        cout << ans[i] << "\n";
    }

    return 0;
}