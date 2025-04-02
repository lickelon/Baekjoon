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
        set<int> sa, sb;
        for(int i = 0; i < n; i++) {
            int input;
            cin >> input;
            sa.insert(input);
        }
        for(int i = 0; i < n; i++) {
            int input;
            cin >> input;
            sb.insert(input);
        }

        int ans = 0;
        for(auto e : sa) {
            if(sa.find(e+500) == sa.end()) continue;
            if(sb.find(e+1000) == sb.end()) continue;
            if(sb.find(e+1500) == sb.end()) continue;
            ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}