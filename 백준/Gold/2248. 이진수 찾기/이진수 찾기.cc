#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;

ll dp[32][32];
string result = "";

ll find(int count, int length)
{
    if(count == 0 || length == 0) return 1;
    if(dp[count][length] != -1) return dp[count][length];

    dp[count][length] = find(count, length - 1);
    if(count > 0) dp[count][length] += find(count - 1, length - 1);
    return dp[count][length];
}

void solve(int count, int length, ll num)
{
    if(length == 0) return;
    if(count == 0)
    {
        while(length--) result += '0';
        return;
    }

    ll comp = find(count, length - 1);
    if(num <= comp)
    {
        result += '0';
        solve(count, length - 1, num);
    }
    else
    {
        result += '1';
        solve(count - 1, length - 1, num - comp);
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll N, L, I;

    fill(&dp[0][0], &dp[31][31], -1);

    cin >> N >> L >> I;

    solve(L, N, I);

    cout << result;

    return 0;
}