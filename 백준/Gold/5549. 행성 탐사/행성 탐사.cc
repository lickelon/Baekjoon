#include <bits/stdc++.h>

using namespace std;

int arr[1001][1001][3];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, m;
    cin >> n >> m;
    int q;
    cin >> q;
    for(int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < m; j++) {
            if(s[j] == 'J') arr[i][j+1][0] = 1;
            if(s[j] == 'O') arr[i][j+1][1] = 1;
            if(s[j] == 'I') arr[i][j+1][2] = 1;
            arr[i][j+1][0] += arr[i][j][0];
            arr[i][j+1][1] += arr[i][j][1];
            arr[i][j+1][2] += arr[i][j][2];
        }
        for(int j = 0; j <= m; j++) {
            arr[i][j][0] += arr[i-1][j][0];
            arr[i][j][1] += arr[i-1][j][1];
            arr[i][j][2] += arr[i-1][j][2];
        }
    }
    for(int i = 0; i < q; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << arr[c][d][0] + arr[a-1][b-1][0] - arr[a-1][d][0] - arr[c][b-1][0] << " ";
        cout << arr[c][d][1] + arr[a-1][b-1][1] - arr[a-1][d][1] - arr[c][b-1][1] << " ";
        cout << arr[c][d][2] + arr[a-1][b-1][2] - arr[a-1][d][2] - arr[c][b-1][2] << "\n";
    }
    return 0;
}