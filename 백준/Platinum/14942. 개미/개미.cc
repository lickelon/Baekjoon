#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

#define MAX 17

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

vector<pii> v[100001];
bool visited[100001];

int ant[100001], Next[100001][MAX], Cost[100001][MAX];
int n;

void DFS(int x)
{
    visited[x] = true;

    for (auto k : v[x])
    {
        if (visited[k.first])
            continue;

        Next[k.first][0] = x;
        Cost[k.first][0] = k.second;
        DFS(k.first);
    }
}

void SPT()
{
    for (int j = 1; j < MAX; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            Next[i][j] = Next[Next[i][j - 1]][j - 1];
            Cost[i][j] = Cost[i][j - 1] + Cost[Next[i][j - 1]][j - 1];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;

    fill(&Next[0][0], &Next[100000][16], 0);
    fill(&Cost[0][0], &Cost[100000][16], 0);

    for (int i = 1; i <= n; i++)
        cin >> ant[i];

    int a, b, c;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    DFS(1);
    Next[1][0] = 1;
    Cost[1][0] = 0;

    SPT();

    for (int i = 1; i <= n; i++)
    {
        int x = i;
        for (int j = MAX - 1; j >= 0; j--)
        {
            if (Cost[x][j] > ant[i])
                continue;

            ant[i] -= Cost[x][j];
            x = Next[x][j];
        }
        cout << x << '\n';
    }

    return 0;
}