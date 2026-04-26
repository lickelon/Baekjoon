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

    int T;
    cin >> T;
    while(T--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<ll> arr(n*2 + 1);
        for(int i = 1; i <= n; i++) {
            cin >> arr[i];
            arr[i+n] = arr[i];
        }
        for(int i = 1; i < 2*n+1; i++) {
            arr[i] += arr[i-1];
        }
        if(n == m) {
            cout << (arr[m]-arr[0] < k ? 1 : 0) << "\n";
            continue;
        }
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i+m]-arr[i] < k) cnt++;
        }
        cout << cnt << "\n";
    }

    return 0;
}