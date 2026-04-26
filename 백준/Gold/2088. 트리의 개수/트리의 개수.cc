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

    string s;
    cin >> s;
    int n = s.length();

    vector<vector<ll>> arr(n, vector<ll>(n));

    for(int i = 0; i < n; i += 2) {
        for(int j = 0; j < n-i; j++) {
            if(i == 0) {
                arr[j][j] = 1;
                continue;
            }
            arr[j][j+i] = 0;
            for(int k = j+2; k <= j+i; k += 2) {
                if(s[j] == s[k] && s[k] == s[j + i]) {
                    arr[j][j+i] = (arr[j][j+i] + arr[j+1][k-1] * arr[k][j+i]) % 1000000000;
                }
            }
        }
    }
    cout << arr[0][n-1];
    return 0;
}