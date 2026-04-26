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
        int sa, sb;
        sa = sb = 0;
        for(int i = 0; i < 9; i++) {
            int a, b;
            cin >> a >> b;
            sa += a;
            sb += b;
        }
        if(sa == sb) {
            cout << "Draw\n";
        }
        else if(sa > sb) {
            cout << "Yonsei\n";
        }
        else {
            cout << "Korea\n";
        }
    }

    return 0;
}