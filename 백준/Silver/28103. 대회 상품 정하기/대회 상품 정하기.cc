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

    ll n, m, x;
    cin >> n >> m >> x;
    vector<ll> price(m);
    for(auto &u : price) cin >> u;
    ll left = n;
    for(int i = 0; i < m - 1; i++) {
        ll temp = min(left, (x - left * price[m-1]) / (price[i] - price[m-1]));
        cout << temp << " ";
        left -= temp;
        x -= temp * price[i];
    }
    cout << left;
    return 0;
}