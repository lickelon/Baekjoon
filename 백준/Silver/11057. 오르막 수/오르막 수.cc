#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int arr[1002][10];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    
    for(int i = 0; i < 10; i++) {
        arr[1][i] = 1;
    }
    for(int i = 2; i <= n+1; i++) {
        for(int j = 0; j < 10; j++) {
            for(int k = 0; k <= j; k++) {
                arr[i][j] += arr[i-1][k];
            }
            arr[i][j] = arr[i][j] % 10007;
        }
    }
    cout << arr[n+1][9];
    return 0;
}