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
    vector<ll> arr(n+1);
    vector<ll> odd(n+1), even(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        if(i%2) odd[i] = arr[i];
        else even[i] = arr[i];
        odd[i] += odd[i-1];
        even[i] += even[i-1];
    }
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        ll temp = 0;
        temp += odd[i-1];
        temp += even[n]-even[i-1];
        if(i%2==0) temp -= arr[n];
        ans = max(ans, temp);
    }
    cout << ans;

    return 0;
}