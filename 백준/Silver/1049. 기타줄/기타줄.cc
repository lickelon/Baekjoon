#include <bits/stdc++.h>

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int arr[7] = {0, INF, INF, INF, INF, INF, INF};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        arr[1] = min(arr[1], b);
        arr[6] = min(arr[6], a);
    }

    //for(int i = 2; i <= 6; i++) {
    //    arr[i] = min(arr[1]*i, arr[6]);
    //}

    int ans = 0;
    while(n >= 6) {
        n -= 6;
        ans += min(arr[1]*6, arr[6]);
    }
    if(n) ans += min(arr[1] * n, arr[6]);
    cout << ans;


    return 0;
}