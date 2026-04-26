#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> e[10001];
int cnt[10001];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        e[b].emplace_back(a);
    }

    int M = 0;
    for(int i = 1; i <= n; i++) {
        queue<int> q;
        bool visit[10001] = {};
        visit[i] = true;
        cnt[i] = 1;
        q.push(i);
        while(!q.empty()) {
            int temp = q.front(); q.pop();
            for(auto u : e[temp]) {
                if(visit[u]) continue;
                visit[u] = true;
                cnt[i]++;
                q.push(u);
            }
        }
        M = max(M, cnt[i]);
    }

    for(int i = 1; i <= n; i++) {
        if(cnt[i] == M) cout << i << " ";
    }

    return 0;
}