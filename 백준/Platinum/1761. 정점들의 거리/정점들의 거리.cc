#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

vector<pii> v[40001];

bool visited[40001];
int Depth[40001], Dist[40001], Next[40001][16];
int n, m;

void DFS(int x, int depth, int dist)
{
    visited[x] = true;
    Depth[x] = depth;
    Dist[x] = dist;

    for (auto k : v[x])
    {
        if (visited[k.first])
            continue;

        Next[k.first][0] = x;
        DFS(k.first, depth + 1, dist + k.second);
    }
}

void SPT()
{
    for (int j = 1; j < 16; j++)
        for (int i = 1; i <= n; i++)
            Next[i][j] = Next[Next[i][j - 1]][j - 1];
}

int lca(int x, int y)
{
    if(Depth[x] > Depth[y])
        swap(x, y);
    for(int i = 15; i >= 0; i--)
        if(Depth[y] - Depth[x] >= (1 << i))
            y = Next[y][i];
    
    if(x == y) return x;
    for(int i = 15; i >= 0; i--)
    {
        if(Next[x][i] != Next[y][i])
        {
            x = Next[x][i];
            y = Next[y][i];
        }
    }
    return Next[x][0];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    int a, b, c;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    DFS(1, 0, 0);
    SPT();

    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        int temp = lca(a, b);
        cout << Dist[a] + Dist[b] - Dist[temp] * 2 << "\n";
    }

    return 0;
}