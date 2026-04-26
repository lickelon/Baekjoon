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
    vector<int> arr(n+1, 0);
    for(int i = n; i > 0; i--) {
        if(m >= i-1) {
            m -= i-1;
            arr[n-i+1] = 1;
        }
    }
    for(int i = 1; i <= n; i++) {
        if(!arr[i]) cout << i << " ";
    }
    for(int i = n; i > 0; i--) {
        if(arr[i]) cout << i << " ";
    }
    cout << "\n";

    return 0;
}