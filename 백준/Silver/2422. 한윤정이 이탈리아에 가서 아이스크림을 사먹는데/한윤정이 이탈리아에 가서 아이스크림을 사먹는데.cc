#include <bits/stdc++.h>

using namespace std;

int ruin[201][201];

int main()
{
    int n, m;
    cin >> n >> m;
    
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        ruin[a][b] = ruin[b][a] = 1;
    }
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            for(int k = j + 1; k <= n; k++) {
                if(ruin[i][j] || ruin[j][k] || ruin[k][i])
                    continue;
                ans++;
                
            }
        }
    }
    cout << ans;
}