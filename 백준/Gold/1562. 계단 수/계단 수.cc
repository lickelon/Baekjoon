#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;

int N;

int dp[10][101][1 << 10];
int solve(int start, int length, int number)
{
    if (length == N)
        return number == (1 << 10) - 1 ? 1 : 0;
    int &temp = dp[start][length][number];
    if (temp != -1)
        return temp;
    temp = 0;
    if (start - 1 >= 0)
        temp += solve(start - 1, length + 1, number | 1 << (start - 1));
    if (start + 1 < 10)
        temp += solve(start + 1, length + 1, number | 1 << (start + 1));
    temp %= 1000000000;
    return temp;
}

int main()
{
    cin >> N;
    int result = 0;
    for (int start = 1; start <= 9; start++)
    {
        fill(&dp[0][0][0], &dp[9][100][(1 << 10) - 1], -1);
        result += solve(start, 1, 1 << start);
        result %= 1000000000;
    }
    cout << result << endl;
    return 0;
}