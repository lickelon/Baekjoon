#include <bits/stdc++.h>

#define MAX 801
#define INF 0x7FFFFFFF

using namespace std;

int result;
int c[MAX][MAX], f[MAX][MAX], d[MAX];
vector<int> a[MAX];

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
                if (c[x][y] - f[x][y] > 0 && d[y] == -1)
                {
                    q.push(y);
                    d[y] = x;
                    if (y == end)
                        break;
                }
            }
        }
        if (d[end] == -1)
            break;
        int flow = INF;
        for (int i = end; i != start; i = d[i])
            flow = min(flow, c[d[i]][i] - f[d[i]][i]);
        for (int i = end; i != start; i = d[i])
        {
            f[d[i]][i] += flow;
            f[i][d[i]] -= flow;
        }
        result += flow;
    }
}

void setter(int x, int y)
{
    a[x].push_back(y);
    a[y].push_back(x);
    c[x][y] = 1;
}

int main()
{
    int N, P;
    scanf("%d %d", &N, &P);

    for (int i = 0; i < P; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        setter(x, x + 400);
        setter(x + 400, y);
        setter(y, y + 400);
        setter(y + 400, x);
    }

    maxFlow(401, 2);
    printf("%d", result);
}