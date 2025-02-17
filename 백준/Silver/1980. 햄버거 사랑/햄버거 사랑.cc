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

    int n, m, t;
    cin >> n >> m >> t;

    pii ans = {0, INF};
    for(int i = 0; i*n <= t; i++) {
        int l = t-i*n;
        int j = l/m;
        int k = l % m;
        if(ans.second > k) {
            ans = {i+j, k};
        }
        else if(ans.second == k) {
            ans.first = max(ans.first, i+j);
        }
    }
    cout << ans.first << " " << ans.second;

    return 0;
}