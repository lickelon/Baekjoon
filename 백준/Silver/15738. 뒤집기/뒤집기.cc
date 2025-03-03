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

    int n, k, m;
    cin >> n >> k >> m;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
    }

    for(int i = 0; i < m; i++) {
        int p;
        cin >> p;
        if(p < 0) {
            p = 2*n+p+1;
        }
        else {
            p = p+1;
        }
        int nxt = p - k;
        if(1 <= nxt && nxt <= n) k = nxt;
    }
    cout << k;

    return 0;
}