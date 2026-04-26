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
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int k;
    cin >> k;

    int i = 0, j = 0;
    ll sum = 0;
    ll ans = 0;

    while(j <= n) {
        if(sum <= k) {
            j += 1;
            if(j == n + 1) break;
            sum += arr[j-1];
        }
        else if(sum > k) {
            i += 1;
            sum -= arr[i-1];
        }
        if(sum > k) {
            ans += (n-j+1);
        }
    }

    cout << ans;

    return 0;
}