#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int arr[102][102];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < n; j++) {
            if(s[j] == '.')
                arr[i+1][j+1] = 1;
        }
    }

    int a = 0, b = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 2; j <= n+1; j++) {
            if(!arr[i][j] && arr[i][j-1] && arr[i][j-2]) {
                a++;
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 2; j <= n+1; j++) {
            if(!arr[j][i] && arr[j-1][i] && arr[j-2][i]) {
                b++;
            }
        }
    }

    cout << a << " " << b;

    return 0;
}