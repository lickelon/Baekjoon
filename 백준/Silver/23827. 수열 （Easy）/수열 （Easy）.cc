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
    
    ll sum = 0;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ll input;
        cin >> input;
        ans += input * sum;
        ans %= 1000000007;
        sum += input;
        sum %= 1000000007;
    }
    cout << ans;

    return 0;
}