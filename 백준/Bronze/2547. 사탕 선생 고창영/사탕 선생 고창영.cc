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

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        ll sum = 0;
        ll temp;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            sum += temp % n;
            sum %= n;
        }
        cout << (sum == 0 ? "YES" : "NO") << "\n";

    }
    return 0;
}