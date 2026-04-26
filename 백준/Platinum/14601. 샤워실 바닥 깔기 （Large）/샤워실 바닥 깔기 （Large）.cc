#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

int dp[256][256];
int cnt = 0;

bool check(int x, int y, int size)
{
    for (int i = x; i < x + size; i++)
    {
        for (int j = y; j < y + size; j++)
        {
            if (dp[i][j] != 0)
                return 0;
        }
    }
    return 1;
}

void solve(int x, int y, int size)
{
    ++cnt;

    int temp = size / 2;

    if (check(x, y, temp))
        dp[x + temp - 1][y + temp - 1] = cnt;
    if (check(x, y + temp, temp))
        dp[x + temp - 1][y + temp] = cnt;
    if (check(x + temp, y, temp))
        dp[x + temp][y + temp - 1] = cnt;
    if (check(x + temp, y + temp, temp))
        dp[x + temp][y + temp] = cnt;

    if (size == 2)
        return;

    solve(x, y, temp);
    solve(x + temp, y, temp);
    solve(x, y + temp, temp);
    solve(x + temp, y + temp, temp);
}

int main()
{
    int k, x, y;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> k >> x >> y;
    dp[y - 1][x - 1] = -1;
    solve(0, 0, 1 << k);
    for (int i = (1 << k) - 1; i >= 0; i--)
    {
        for (int j = 0; j < (1 << k); j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}