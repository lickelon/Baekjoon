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
    vector<vector<int>> arr(n, vector<int>(n));
    int a, b, c, d;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 2) {
                a = i;
                b = j;
            }
            else if(arr[i][j] == 5) {
                c = i;
                d = j;
            }
        }
    }
    if((a-c)*(a-c)+(b-d)*(b-d) >= 25) {
        int cnt = 0;
        for(int i = min(a, c); i <= max(a, c); i++) {
            for(int j = min(b, d); j <= max(b, d); j++) {
                if(arr[i][j] == 1) cnt++;
            }
        }
        if(cnt >= 3) cout << 1;
        else cout << 0;
    }
    else cout << 0;

    return 0;
}