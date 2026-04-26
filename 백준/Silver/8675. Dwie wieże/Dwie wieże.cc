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
    vector<ll> arr1(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> arr1[i];
        arr1[i] += arr1[i-1];
    }
    
    vector<ll> arr2(m+1);
    for (int i = 1; i <= m; i++) {
        cin >> arr2[i];
        arr2[i] += arr2[i-1];
    }

    ll ans = INF;
    ll idx = 0;
    int i = 0, j = 0;
    while(i <= n && j <= m) {
        if(arr1[i] < arr2[j]) i++;
        else if(arr1[i] > arr2[j]) j++;
        else {
            ans = min(ans, n-i+m-j);
            i++;
            j++;
        }
    }

    cout << ans;

    return 0;
}