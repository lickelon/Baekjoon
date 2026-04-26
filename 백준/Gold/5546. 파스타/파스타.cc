#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int dp[101][4][3];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, K;
    cin >> N >> K;
    vector<int> fixed(N);
    for(int i = 0; i < K; i++) {
        int day;
        cin >> day;
        cin >> fixed[day-1];
    }


    if(!fixed[0]) {
        dp[0][1][1] = 1;
        dp[0][2][1] = 1;
        dp[0][3][1] = 1;
    }
    else {
        dp[0][fixed[0]][1] = 1;
    }
    for(int i = 1; i < N; i++) {
        for(int j = 1; j <= 3; j++) {
            if(!fixed[i] || fixed[i] == j) {
                int temp = 0;
                temp += dp[i-1][1][1] + dp[i-1][1][2];
                temp += dp[i-1][2][1] + dp[i-1][2][2];
                temp += dp[i-1][3][1] + dp[i-1][3][2];
                temp -= dp[i-1][j][1] + dp[i-1][j][2];
                dp[i][j][1] = temp % 10000;
                dp[i][j][2] = dp[i-1][j][1] % 10000;
            }
        }
    }

    cout << (dp[N-1][1][1] + dp[N-1][1][2] + dp[N-1][2][1] + dp[N-1][2][2] + dp[N-1][3][1] + dp[N-1][3][2]) % 10000;

    return 0;
}