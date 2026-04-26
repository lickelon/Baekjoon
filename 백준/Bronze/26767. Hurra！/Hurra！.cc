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

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        if(i % 77 == 0) {
            cout << "Wiwat!\n";
            continue;
        }
        if(i % 7 == 0) {
            cout << "Hurra!\n";
            continue;
        }
        if(i % 11 == 0) {
            cout << "Super!\n";
            continue;
        }
        cout << i << "\n";
    }

    return 0;
}