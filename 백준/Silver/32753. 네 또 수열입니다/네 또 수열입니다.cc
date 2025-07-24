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

    int n, k;
    cin >> n >> k;
    if(n == 1) {
        for(int i = 0; i < k; i++) {
            cout << 1 << " ";
        }
    }
    else if(n == 2 && k == 1) {
        cout << "1 2";
    }
    else {
        cout << -1;
    }

    return 0;
}