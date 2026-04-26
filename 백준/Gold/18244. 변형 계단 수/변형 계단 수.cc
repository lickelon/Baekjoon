#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

#define loop(x) for (int i = 0; i < x; i++)

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

ll dp[100][10][4]; // -2 -1 1 2

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;

    fill(&dp[0][0][0], &dp[99][9][3], 0);

    cin >> N;
    if (N == 1)
    {
        cout << 10;
        return 0;
    }
    for (int i = 0; i < 10; i++)
    {
        if (i != 0)
            dp[1][i - 1][1] += 1;
        if (i != 9)
            dp[1][i + 1][2] += 1;
    }
    for (int i = 1; i < N - 1; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            //mod
            dp[i][j][0] %= 1000000007;
            dp[i][j][1] %= 1000000007;
            dp[i][j][2] %= 1000000007;
            dp[i][j][3] %= 1000000007;
            //case -2
            if (j < 9)
                dp[i + 1][j + 1][2] += dp[i][j][0];
            //case -1
            if (j < 9)
                dp[i + 1][j + 1][2] += dp[i][j][1];
            if (j > 0)
                dp[i + 1][j - 1][0] += dp[i][j][1];
            //case 1
            if (j < 9)
                dp[i + 1][j + 1][3] += dp[i][j][2];
            if (j > 0)
                dp[i + 1][j - 1][1] += dp[i][j][2];
            //case 2
            if (j > 0)
                dp[i + 1][j - 1][1] += dp[i][j][3];
        }
    }
    ll ans = 0;
    for (int j = 0; j < 10; j++)
    {
        for (int k = 0; k < 4; k++)
        {
            ans += dp[N - 1][j][k];
            ans %= 1000000007;
        }
    }

    cout << ans;

    return 0;
}