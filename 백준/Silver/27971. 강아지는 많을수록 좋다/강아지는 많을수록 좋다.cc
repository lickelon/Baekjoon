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

    int n, m, a, b;
    cin >> n >> m >> a >> b;
    vector<int> arr(n+1, INF);
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        for(int i = l; i <= r; i++) {
            arr[i] = -1;
        }
    }
    arr[0] = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] == -1 || arr[i] == INF) continue;
        if(i + a <= n) {
            arr[i+a] = min(arr[i+a], arr[i]+1);
        }
        if(i + b <= n) {
            arr[i+b] = min(arr[i+b], arr[i]+1);
        }
    }
    
    if(arr[n] == -1 || arr[n] == INF) cout << -1;
    else cout << arr[n];
    
    return 0;
}