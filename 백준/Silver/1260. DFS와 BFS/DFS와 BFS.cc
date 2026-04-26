#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

#define loop(x) for (int i = 0; i < x; i++)

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

bool visit[1001];
vector<int> v[1001];

int N, M, C;

void DFS()
{
    stack<int> S;
    S.push(C);

    while(!S.empty())
    {
        int cur = S.top(); S.pop();
        if(visit[cur]) continue;
        visit[cur] = true;
        for(int i = v[cur].size() - 1; i >= 0; i--)
        {
            S.push(v[cur][i]);
        }

        cout << cur << " ";
    }
    cout << "\n";
}
void BFS()
{
    queue<int> Q;
    Q.push(C);

    while(!Q.empty())
    {
        int cur = Q.front(); Q.pop();
        if(visit[cur]) continue;
        visit[cur] = true;
        for(int i = 0; i < v[cur].size(); i++)
        {
            Q.push(v[cur][i]);
        }
        cout << cur << " ";
    }

    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M >> C;

    for (int i = 0; i < M; i++)
    {
        int A, B;
        cin >> A >> B;

        v[A].push_back(B);
        v[B].push_back(A);
    }

    for (int i = 1; i <= N; i++)
    {
        sort(v[i].begin(), v[i].end());
    }

    DFS();
    fill(visit, visit + 1001, 0);
    BFS();

    return 0;
}