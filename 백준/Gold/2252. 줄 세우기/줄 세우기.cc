#include <bits/stdc++.h>

#define MAX 32001
#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

vector<int> e[MAX];
int inDegree[MAX];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        e[a].push_back(b);
        inDegree[b]++;
    }

    int result[MAX];
    queue<int> q;
    for(int i = 1; i <= n; i++) {
        if(inDegree[i] == 0) q.push(i);
    }

    for(int i = 1; i <= n; i++) {
        int x = q.front(); q.pop();
        result[i] = x;
        for(int j = 0; j < e[x].size(); j++) {
            int y = e[x][j];
            if(--inDegree[y] == 0)
                q.push(y);
        }
    }

    for(int i = 1; i <= n; i++) {
        cout << result[i] << " ";
    }

    return 0;
}