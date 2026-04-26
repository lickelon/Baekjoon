#include <cstdio>
#include <algorithm>
#include <vector>

using std::vector;

vector<int> C[100001];
int N[100001] = { 0, };

int DFS(int x)
{
    N[x] = 0;

    for (auto u : C[x])
    {
        if(N[u] == -1) N[x] = std::max(N[x], DFS(u));
    }
    return N[x] + 1;
}
int main()
{
    int K, S, D, result = 0;
    scanf("%d %d %d", &K, &S, &D);

    for (int i = 0; i < K - 1; i++)
    {
        int a, b;

        scanf("%d %d", &a, &b);

        C[a].push_back(b);
        C[b].push_back(a);
    }
    std::fill(N, N + 100001, -1);
    DFS(S);

    for (int i = 1; i <= K; i++)
    {
        if (N[i] - D >= 0) result++;
    }
    result = 2 * result - 2;
    printf("%d", result > 0 ? result : 0);
    return 0;
}