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

    int n, k;
    cin >> n >> k;
    int c = 0;
    for(int i = 1; i <= n; i++) {
        c += (n % i == 0);
        if(c == k) {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}