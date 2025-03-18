#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x7FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

ll gcd(ll a, ll b)
{
    if (!b) return a;
    return gcd(b, a % b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    vector<int> ans(1001);
    ans[0] = 0;
    ans[1] = 3;
    for(int i = 2; i <= 1000; i++) {
        ans[i] = 0;
        for(int j = 0; j <= i; j++) {
            if(gcd(i, j) == 1) ans[i] += 2;
        }
        ans[i] += ans[i-1];
    }

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        cout << ans[n] << "\n";
    }

    return 0;
}