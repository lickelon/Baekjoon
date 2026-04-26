#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int dp[1001][4000];

bool compare(pair<int, int> &a, pair<int, int> &b)
{
    if ((a.first + a.second) == (b.first + b.second))
        return a.first < b.first;
    return (a.first + a.second) < (b.first + b.second);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<pair<int, int>> arr(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end(), compare);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < arr[i].second; j++)
        {
            int p = arr[i].first;
            if (j != 0 && dp[i - 1][j] == 0)
                continue;
            dp[i][j + p] = max(dp[i - 1][j + p], dp[i - 1][j] + 1);
        }
        for (int j = 0; j < 4000; j++)
        {
            dp[i][j] = max(dp[i][j], dp[i - 1][j]);
        }
    }
    int _max = 0;
    int m_idx = -1;
    for (int j = 0; j < 4000; j++)
    {
        if (dp[n][j] > _max)
        {
            _max = dp[n][j];
            m_idx = j;
        }
    }
    cout << _max << " " << m_idx;

    return 0;
}