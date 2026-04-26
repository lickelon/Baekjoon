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

    int n, m, k;
    cin >> n >> m;
    vector<vector<int>> A(n, vector<int>(m));
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    cin >> m >> k;
    vector<vector<int>> B(m, vector<int>(k));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < k; j++) {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < k; j++) {
            int sum = 0;
            for(int l = 0; l < m; l++) {
                sum += A[i][l] * B[l][j];
            }
            cout << sum << " ";
        }
        cout << "\n";
    }

    return 0;
}