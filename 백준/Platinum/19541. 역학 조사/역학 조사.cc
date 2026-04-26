#include <iostream>
#include <vector>

std::vector<int> _v[100001];
int Infected[100001];
int start[100001];
int test[100001];

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 0; i < M; i++)
    {
        int K;
        scanf("%d", &K);
        for (int j = 0; j < K; j++)
        {
            int T;
            scanf("%d", &T);
            _v[i].push_back(T);
        }
    }
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &Infected[i]);
        start[i] = Infected[i];
    }

    for (int i = M - 1; i >= 0; i--)
    {
        int isInfected = 0;
        for (auto u : _v[i])
        {
            isInfected |= start[u];
        }
        if (isInfected)
        {
            int checkAll = 1;
            for (auto u : _v[i])
            {
                checkAll &= start[u];
            }
            if (!checkAll)
            {
                for (auto u : _v[i])
                {
                    start[u] = 0;
                }
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        test[i] = start[i];
    }

    for (int i = 0; i < M; i++)
    {
        int isInfected = 0;
        for (auto u : _v[i])
        {
            isInfected |= test[u];
        }
        if (isInfected)
        {
            for (auto u : _v[i])
            {
                test[u] = 1;
            }
        }
    }

    for (int i = 1; i <= N; i++)
    {
        if (test[i] != Infected[i])
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");

    for (int i = 1; i <= N; i++)
    {
        printf("%d ", start[i]);
    }
    return 0;
}