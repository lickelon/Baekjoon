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

    int a1, a0;
    int c;
    int n;
    cin >> a1 >> a0 >> c >> n;
    if(c < a1 || (c - a1) * n < a0) cout << 0;
    else cout << 1;

    return 0;
}