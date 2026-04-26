#include <bits/stdc++.h>

using namespace std;

int cost[3][1000], N;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N;

    for(int i = 0; i < N; i++)
        cin >> cost[0][i] >> cost[1][i] >> cost[2][i];
    
    for(int i = 1; i < N; i++)
    {
        cost[0][i] += min(cost[1][i - 1], cost[2][i - 1]);
        cost[1][i] += min(cost[0][i - 1], cost[2][i - 1]);
        cost[2][i] += min(cost[0][i - 1], cost[1][i - 1]);
    }
    cout << min(cost[0][N - 1], min(cost[1][N - 1], cost[2][N - 1])) << "\n";
    return 0;
}