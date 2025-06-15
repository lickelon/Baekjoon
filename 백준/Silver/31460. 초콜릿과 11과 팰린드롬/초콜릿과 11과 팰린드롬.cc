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

    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        if(n == 1) {
            cout << "0\n";
            continue;
        }
        cout << 1;
        for(int i = 2; i < n; i++) cout << 2;
        cout << 1;
        cout << "\n";
    }

    return 0;
}