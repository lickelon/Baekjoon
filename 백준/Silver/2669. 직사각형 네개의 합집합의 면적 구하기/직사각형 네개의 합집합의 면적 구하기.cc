#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

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

    int a, b, c, d;
    for(int i = 0; i < 4; i++) {
        cin >> a >> b >> c >> d;
        for(int i = a; i < c; i++) {
            for(int j = b; j < d; j++) {
                arr[i][j] = 1;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < 101; i++) {
        for(int j = 0; j < 101; j++) {
            if(arr[i][j]) ans++;
        }
    }

    cout << ans;

    return 0;
}