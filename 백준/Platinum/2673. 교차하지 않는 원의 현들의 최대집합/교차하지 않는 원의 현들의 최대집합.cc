#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    int edge[101][101] = {};
    int dp[101][101] = {};
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        if(a>b) swap(a,b);
        edge[a][b] = 1;
    }
    int temp;
    for(int d = 0; d < 100; d++) {
        for(int i = 1; i <= 100-d; i++) {
            for(int k = 0; k < d; k++) {
                if(edge[i][i+d]) {
                    temp = 0;
                }
                dp[i][i+d] = max(dp[i][i+d], dp[i][i+k] + dp[i+k][i+d] + edge[i][i+d]);
            }
        }
    }
    cout << dp[1][100];

    return 0;
}