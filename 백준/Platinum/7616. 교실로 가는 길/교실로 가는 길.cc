#include <bits/stdc++.h>

#define INF 0x7FFFFFFF
#define MAX 10001

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

int result;
char c[MAX][MAX];
int d[MAX];
vector<int> a[MAX];
bool visited[MAX];

void maxFlow(int start, int end)
{
    while (1)
    {
        fill(d, d + MAX, -1);
        d[start] = start;

        queue<int> q;
        q.push(start);
        while (!q.empty())
        {
            int x = q.front();
            q.pop();
            for (int i = 0; i < a[x].size(); i++)
            {
                int y = a[x][i];
                // 방문하지 않은 노드 중에 용량이 남은 경우
                if (c[x][y] > 0 && d[y] == -1)
                {
                    q.push(y);
                    d[y] = x; // 경로를 기억합니다.
                    if (y == end)
                        break; // 도착지에 도달한 경우
                }
            }
        }

        if (d[end] == -1)
            break; // 모든 경로를 찾은 뒤에 탈출합니다.
        int flow = 1;
        for (int i = end; i != start; i = d[i])
        {
            c[d[i]][i] -= 1;
            c[i][d[i]] += 1;
        }
        result += flow;
    }
}

void print(int k)
{
    while (true)
    {
        visited[k] = true;
        if (k == 3)
        {
            cout << "2\n";
            visited[3] = false;
            return;
        }
        if (k % 2)
        {
            k = k + 1;
            cout << k / 2 << " ";
        }
        for (auto u : a[k])
        {
            if(u == k - 1) continue;
            if (!visited[k] && c[k][u] == 0)
            {
                k = u;
                break;
            }
        }
    }
}

int main()
{
    int T = 0;

    while (++T)
    {
        int K, N;
        cin >> K >> N;

        if (K == 0 && N == 0)
            break;

        fill(&c[0][0], &c[MAX - 1][MAX - 1], 0);
        fill(visited, visited + MAX, 0);
        result = 0;
        for (int i = 0; i < MAX; i++)
        {
            a[i].clear();
        }
        for (int i = 1; i <= N; i++)
        {
            a[i * 2 - 1].push_back(i * 2);
            a[i * 2].push_back(i * 2 - 1);
            c[i * 2 - 1][i * 2] = 1;
            while (true)
            {
                int input;
                char ch;
                scanf("%d%c", &input, &ch);

                a[i * 2].push_back(input * 2 - 1);
                a[input * 2 - 1].push_back(i * 2);
                c[i * 2][input * 2 - 1] = 1;
                if (ch == '\n')
                    break;
            }
        }
        cout << "Case " << T << ":\n";

        maxFlow(2, 3);

        //print route
        if (result >= K)
        {
            for (auto u : a[2])
            {
                if (u == 1)
                    continue;
                if (!visited[u] && c[2][u] == 0)
                {
                    cout << "1 ";
                    print(u);
                    K--;
                    if (!K)
                        break;
                }
            }
        }
        else
            cout << "Impossible\n";
        cout <<"\n";
    }

    return 0;
}