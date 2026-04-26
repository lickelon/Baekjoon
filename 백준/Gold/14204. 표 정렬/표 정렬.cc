#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int matrix[50][50];
int n, m;

void swap_row(int a, int b) {
    for(int i = 0; i < m; i++) {
        int temp = matrix[a][i];
        matrix[a][i] = matrix[b][i];
        matrix[b][i] = temp;
    }
}
void swap_col(int a, int b) {
    for(int i = 0; i < n; i++) {
        int temp = matrix[i][a];
        matrix[i][a] = matrix[i][b];
        matrix[i][b] = temp;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(matrix[i][0] > matrix[j][0]) {
                swap_row(i,j);
            }
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = i + 1; j < m; j++) {
            if(matrix[0][i] > matrix[0][j]) {
                swap_col(i,j);
            }
        }
    }

    int before = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(matrix[i][j] < before) {
                cout << 0;
                return 0;
            }
            before = matrix[i][j];
        }
    }
    cout << 1;

    return 0;
}