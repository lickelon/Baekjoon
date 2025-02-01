#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF
#define MOD 9901

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

    vector<array<int, 3>> arr(n); //None, Left, Right
    arr[0] = {1,1,1};
    for(int i = 1; i < n; i++) {
        arr[i][0] = (arr[i-1][0]+arr[i-1][1]+arr[i-1][2]) % MOD;
        arr[i][1] = (arr[i-1][0]+arr[i-1][2]) % MOD;
        arr[i][2] = (arr[i-1][0]+arr[i-1][1]) % MOD;
    }

    cout << (arr[n-1][0]+arr[n-1][1]+arr[n-1][2]) % MOD;

    return 0;
}