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

    int n;
    cin >> n;
    int q;
    cin >> q;
    vector<ll> arr(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    vector<ll> sum(n+1);
    for(int i = 1; i <= n; i++) {
        sum[i] = sum[i-1] + arr[i-1] * (arr[i]-arr[i-1]);
    }
    
    for(int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << sum[r] - sum[l-1] - arr[l-1] * (arr[r] - arr[l-1]) << "\n";
    }

    return 0;
}