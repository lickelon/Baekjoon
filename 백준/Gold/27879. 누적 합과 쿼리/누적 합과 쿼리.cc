#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int arr[1001][1001] = {};
int sum[1001][1001][4][2] = {};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            string s;
            cin >> s;
            if(s[0] == 'a') arr[i][j] = 0;
            if(s[0] == 'b') arr[i][j] = 1;
        }
    }
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i>1)sum[i][j][arr[i-1][j]*2+arr[i][j]][0] += 1;
            if(j>1)sum[i][j][arr[i][j-1]*2+arr[i][j]][1] += 1;

            for(int k = 0; k < 4; k++) {
                sum[i][j][k][1] += sum[i][j-1][k][1];
                sum[i][j][k][0] += sum[i][j-1][k][0];
            }
        }
        for(int j = 1; j <= n; j++) {
            for(int k = 0; k < 4; k++) {
                sum[i][j][k][0] += sum[i-1][j][k][0];
                sum[i][j][k][1] += sum[i-1][j][k][1];
            }
        }
    }
    int q;
    cin >> q;
    while(q--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        string s;
        cin >> s;
        int k = (s[0]-'a') * 2 + s[1]-'a';
        int ans = sum[c][d][k][0] - sum[a][d][k][0] - sum[c][b-1][k][0] + sum[a][b-1][k][0];
        ans += sum[c][d][k][1] - sum[a-1][d][k][1] - sum[c][b][k][1] + sum[a-1][b][k][1];
        cout << ans << "\n";
    }

    return 0;
}