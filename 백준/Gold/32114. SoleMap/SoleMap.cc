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

    int n, m;
    cin >> n >> m;

    vector<ll> cap(n), arr(n+1);
    for(int i = 1; i < n; i++)
        cin >> cap[i];
    for(int i = 0; i < m; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        arr[a] += c;
        arr[b] -= c;
    }
    for(int i = 1; i <= n; i++) {
        arr[i] += arr[i-1];
    }

    for(int i = 1; i < n; i++) {
        ll q = arr[i] / cap[i];
        ll r = arr[i] % cap[i];
        cout << (q+1)*(q+1)*r + q*q*(cap[i]-r) << "\n";
    }
    
    return 0;
}