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
        int n;
        cin >> n;
        int o = 0, e = 0;
        for(int i = 0; i < n; i++) {
            int input;
            cin >> input;
            if(input%2) o++;
            else e++;
        }
        if(o == e || max(o, e) % 2 == 0) cout << "heeda0528\n";
        else cout << "amsminn\n";
    }

    return 0;
}