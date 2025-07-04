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

    int T;
    cin >> T;
    while(T--) {
        int n, k;
        cin >> n >> k;
        for(int i = 0; i < n; i++) {
            cout << k - (i % k) << " ";
        }
        cout << "\n";
    }

    return 0;
}