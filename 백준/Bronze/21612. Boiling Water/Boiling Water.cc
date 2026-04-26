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

    int b;
    cin >> b;
    int t = b * 5 - 400;
    cout << t << "\n";
    if(t == 100) cout << 0;
    else if(t < 100) cout << 1;
    else cout << -1;

    return 0;
}