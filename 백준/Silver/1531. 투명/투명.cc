#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int arr[101][101];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        int ax, ay, bx, by;
        cin >> ax >> ay >> bx >> by;
        for(int i = ax; i <= bx; i++) {
            for(int j = ay; j <= by; j++) {
                arr[i][j]++;
            }
        }
    }

    int ans = 0;
    for(int i = 1; i <= 100; i++) {
        for(int j = 1; j <= 100; j++) {
            if(arr[i][j] > m) ans++;
        }
    }

    cout << ans;

    return 0;
}