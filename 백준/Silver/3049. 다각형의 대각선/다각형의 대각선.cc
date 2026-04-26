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
    int ans = 0;
    for(int i = 0; i < n - 1; i++) {
        ans += i * (n - 2 - i);
    }
    ans *= n;
    ans /= 4;
    
    cout << ans;

    return 0;
}