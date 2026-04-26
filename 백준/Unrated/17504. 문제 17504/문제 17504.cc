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
    for(int i = n - 1; i >= 0; i--) {
        cin >> arr[i];
    }

    ll p, q;
    
    p = 1;
    q = arr[0];
    for(int i = 1; i < n; i++) {
        ll temp = p;
        p = q;
        q = temp + arr[i] * q;
    }

    cout << q - p << " " << q;

    return 0;
}