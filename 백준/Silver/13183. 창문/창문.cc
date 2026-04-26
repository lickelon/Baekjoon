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

    ll h, w;
    cin >> h >> w;
    h += 2;
    w += 2;
    h %= 1000000007ll;
    w %= 1000000007ll;
    cout << (w*h) % 1000000007ll;

    return 0;
}