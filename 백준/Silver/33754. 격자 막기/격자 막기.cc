#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

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
    vector<array<int, 2>> arr(n);
    for(auto &e : arr) cin >> e[0];
    for(auto &e : arr) cin >> e[1];

    int ans = 2;
    for(int i = 0; i < n; i++) {
        if((arr[i][0] & arr[i][1]) != 1) ans = 1;
    }

    for(int i = 1; i < n; i++) {
        if((arr[i][0] | arr[i][1]) == 0) ans = 0;
        if((arr[i][0] | arr[i-1][1]) == 0) ans = 0;
        if((arr[i-1][0] | arr[i][1]) == 0) ans = 0;
    }

    cout << ans;

    return 0;
}