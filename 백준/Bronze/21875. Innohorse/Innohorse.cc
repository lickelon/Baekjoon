#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()

#define INF 0x3FFFFFFF

using namespace std;

using ll = long long;
using ld = long double;
using pii = pair<int,int>;
using pll = pair<ll, ll>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string a, b;
    cin >> a >> b;
    pii ans = {abs(a[0]-b[0]), abs(a[1]-b[1])};
    if(ans.first > ans.second) swap(ans.first, ans.second);

    cout << ans.first << " " << ans.second;

    return 0;
}