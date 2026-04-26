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

    int n;
    cin >> n;
    vector<int> arr(n-1);
    int before;
    cin >> before;
    for (int i = 0; i < n-1; i++) {
        int temp;
        cin >> temp;
        arr[i] = temp - before;
        before = temp;
    }
    int g = arr[0];
    for(int i = 1; i < n-1; i++) {
        g = gcd(g, arr[i]);
    }
    int ans = 0;
    for(int i = 0; i < n-1; i++) {
        ans += (arr[i]) / g - 1;
    }
    cout << ans;

    return 0;
}