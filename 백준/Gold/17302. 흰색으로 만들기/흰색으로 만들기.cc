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

    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            if(s[j] == 'W') arr[i][j] = 0;
            else arr[i][j] = 1;
        }
    }
    for(int i = 0; i < n; i++) {
        arr[i][0] = !arr[i][0];
        arr[i][m-1] = !arr[i][m-1];
    }
    for(int j = 0; j < m; j++) {
        arr[0][j] = !arr[0][j];
        arr[n-1][j] = !arr[n-1][j];
    }

    cout << "1\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j]+2;
        }
        cout << "\n";
    }

    return 0;
}