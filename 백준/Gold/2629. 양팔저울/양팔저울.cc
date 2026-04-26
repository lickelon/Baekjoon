#include <bits/stdc++.h>

using namespace std;

int weight[30];
bool poss[31][30001];
int N;
int WSum;

void solve(int x, int k)
{
    if (poss[k][x])
        return;
    poss[k][x] = true;

    if (k < N)
    {
        solve(x - weight[k], k + 1);
        solve(x, k + 1);
        solve(x + weight[k], k + 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M, input;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> weight[i];
        WSum += weight[i];
    }

    solve(15000, 0);

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        cin >> input;
        if (input <= WSum)
        {
            bool valid = false;
            for (int j = 0; j <= N; j++)
                valid |= poss[j][input + 15000];

            if (valid) printf("Y ");
            else printf("N ");
        }
        else printf("N ");
    }
}