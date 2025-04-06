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

int arr[2001][2001] = {};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int d1, d2;
    cin >> d1 >> d2;

    int ans = 0;
    for(ll i = d1; i <= d2; i++) {
        for(ll j = 1; j <= i; j++) {
            int g = gcd(i, j);
            if(!arr[j/g][i/g]) {
                arr[j/g][i/g] = 1;
                ans++;
            }
        }
    }
    cout << ans;

    return 0;
}