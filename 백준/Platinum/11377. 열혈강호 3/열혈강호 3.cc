#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

#define MAX 2003

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

int result, N, M, K;
int c[MAX][MAX], f[MAX][MAX], d[MAX];
vector<int> a[MAX];

void maxFlow1(int start, int end)
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
                if (c[x][y] - f[x][y] > 0 && d[y] == -1)
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
        int flow = INF;
        for (int i = end; i != start; i = d[i])
        { // 거꾸로 최소 유량 탐색
            flow = min(flow, c[d[i]][i] - f[d[i]][i]);
        }
        // 최소 유량만큼 추가합니다.
        for (int i = end; i != start; i = d[i])
        {
            f[d[i]][i] += flow;
            f[i][d[i]] -= flow;
        }
        result += flow;
    }
}

void maxFlow2(int start, int end)
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
                if (c[x][y] - f[x][y] > 0 && d[y] == -1)
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
        int flow = INF;
        for (int i = end; i != start; i = d[i])
        { // 거꾸로 최소 유량 탐색
            flow = min(flow, c[d[i]][i] - f[d[i]][i]);
        }
        // 최소 유량만큼 추가합니다.
        for (int i = end; i != start; i = d[i])
        {
            f[d[i]][i] += flow;
            f[i][d[i]] -= flow;
        }
        result += flow;
        K--;
        if(K == 0)
            break;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> M >> K;

    for (int i = 1; i <= N; i++)
    {
        a[0].push_back(i);
        a[i].push_back(0);
        c[0][i] = 1;
    }

    for (int i = 1; i <= N; i++)
    {
        a[2002].push_back(i);
        a[i].push_back(2002);
        c[2002][i] = 1;
    }

    for (int i = 1; i <= N; i++)
    {
        int s;
        cin >> s;
        while (s--)
        {
            int input;
            cin >> input;
            input += 1000;

            a[i].push_back(input);
            a[input].push_back(i);
            c[i][input] = 1;
        }
    }

    for (int i = 1001; i <= M + 1000; i++)
    {
        a[2001].push_back(i);
        a[i].push_back(2001);
        c[i][2001] = 1;
    }

    maxFlow1(0, 2001);
    maxFlow2(2002, 2001);

    cout << result;
    return 0;
}