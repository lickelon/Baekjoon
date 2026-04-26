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

    ll n, m;
    cin >> n >> m;
    vector<ll> arr(n+1);
    for(int i = 0; i < n; i++) {
        cin >> arr[i+1];
        arr[i+1] += arr[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j <= n; j++) {
            if(m == arr[j] - arr[i]) ans++;
        }
    }
    cout << ans;

    return 0;
}