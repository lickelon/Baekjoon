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

    int n, m, k, x;
    cin >> n >> m >> k >> x;
    
    vector<int> arr(n+1);
    arr[0] = x;
    for(int i = 1; i <= n; i++) {
        int input;
        cin >> input;
        arr[i] = arr[i-1] + input;
    }

    vector<int> sum(n+1);
    if(arr[0] < k) sum[0] = 1;
    for(int i = 1; i <= n; i++) {
        if(arr[i] < k) sum[i] = 1;
        sum[i] += sum[i-1];
    }

    for(int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        cout << sum[r-1] - sum[l-1] << "\n";
    }

    return 0;
}